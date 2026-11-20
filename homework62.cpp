#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Frog {
    long long x, t; // 坐标和初始舌头长度
    int id;         // 初始输入的顺序编号
    long long r;    // 当前能覆盖的最远右端点 (x + t)
    int cnt;        // 吃掉的蚊子数量
};

vector<Frog> frogs;
vector<long long> tree; // 线段树，维护区间最大的 r

// 向上更新
void push_up(int p) {
    tree[p] = max(tree[p << 1], tree[p << 1 | 1]);
}

// 建树
void build(int p, int l, int r) {
    if (l == r) {
        tree[p] = frogs[l].r;
        return;
    }
    int mid = (l + r) >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    push_up(p);
}

// 单点更新
void update(int p, int l, int r, int idx, long long val) {
    if (l == r) {
        tree[p] = val;
        return;
    }
    int mid = (l + r) >> 1;
    if (idx <= mid) update(p << 1, l, mid, idx, val);
    else update(p << 1 | 1, mid + 1, r, idx, val);
    push_up(p);
}

// 查询 [qL, qR] 中第一个满足 r >= val 的下标
int query(int p, int l, int r, int qL, int qR, long long val) {
    if (l > qR || r < qL) return -1; // 不在查询区间
    if (tree[p] < val) return -1;    // 剪枝：最大值都小于 val
    if (l == r) return l;            // 找到叶子节点

    int mid = (l + r) >> 1;
    // 优先查左子树，保证找到的是最左边的青蛙
    int res = query(p << 1, l, mid, qL, qR, val);
    if (res != -1) return res;
    return query(p << 1 | 1, mid + 1, r, qL, qR, val);
}

// 扫荡地上的蚊子：只要青蛙能够得着，就全吃掉
void sweep(int idx, set<pair<long long, long long>>& waiting_mosquitoes) {
    Frog& f = frogs[idx];
    // 查找 [f.x, f.r] 范围内的蚊子
    auto it = waiting_mosquitoes.lower_bound({f.x, -1});
    while (it != waiting_mosquitoes.end() && it->first <= f.r) {
        f.cnt++;                  // 吃掉一只
        f.r += it->second;        // 舌头变长
        update(1, 0, frogs.size() - 1, idx, f.r); // 更新线段树
        it = waiting_mosquitoes.erase(it);        // 从地上移除
    }
}

int main() {
    // 优化输入输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    frogs.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> frogs[i].x >> frogs[i].t;
        frogs[i].id = i;
        frogs[i].cnt = 0;
        frogs[i].r = frogs[i].x + frogs[i].t;
    }

    // 按青蛙坐标从小到大排序
    sort(frogs.begin(), frogs.end(), [](const Frog& a, const Frog& b) {
        return a.x < b.x;
    });

    tree.assign(4 * n, 0);
    build(1, 0, n - 1);

    // 使用 set 保存地上的蚊子，按照位置从小到大排序
    set<pair<long long, long long>> waiting_mosquitoes; 

    for (int j = 0; j < m; j++) {
        long long p, b;
        cin >> p >> b;
        
        // 1. 二分查找最后一个 x <= p 的青蛙下标
        int left = 0, right = n - 1, idx = -1;
        while (left <= right) {
            int mid = (left + right) >> 1;
            if (frogs[mid].x <= p) {
                idx = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        bool eaten = false;
        // 2. 尝试让活着且长度够的青蛙吃掉它
        if (idx != -1) {
            int target = query(1, 0, n - 1, 0, idx, p);
            if (target != -1) {
                frogs[target].cnt++;
                frogs[target].r += b;
                update(1, 0, n - 1, target, frogs[target].r);
                
                // 3. 核心：这只青蛙变长了，去扫荡地上的蚊子
                sweep(target, waiting_mosquitoes);
                eaten = true;
            }
        }

        // 4. 如果没有青蛙能吃，蚊子就留在地上
        if (!eaten) {
            waiting_mosquitoes.insert({p, b});
        }
    }

    // 恢复原来的顺序保存答案
    vector<pair<int, long long>> ans(n);
    for (int i = 0; i < n; i++) {
        ans[frogs[i].id] = {frogs[i].cnt, frogs[i].r - frogs[i].x};
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }

    return 0;
}
