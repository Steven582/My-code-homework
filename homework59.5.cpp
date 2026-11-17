#include <iostream>
#include <vector>
using namespace std;

struct Movie {
    int audio;
    int subtitle;
};

int main() {
    // 优化输入输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    // 统计每种语言的科学家数量（语言编号 1~1000）
    vector<int> lang_count(1005, 0);
    for (int i = 0; i < n; i++) {
        int lang;
        cin >> lang;
        lang_count[lang]++;
    }

    int m;
    cin >> m;
    
    vector<Movie> movies(m);
    for (int i = 0; i < m; i++) {
        cin >> movies[i].audio;
    }
    for (int i = 0; i < m; i++) {
        cin >> movies[i].subtitle;
    }

    // 记录最大的非常高兴人数和对应的最大基本满意人数
    int max_v_satisfy = -1;
    int max_satisfy = -1;

    // 第一遍遍历：找出最高标准
    for (int i = 0; i < m; i++) {
        int v_satisfy = lang_count[ movies[i].audio ] ;
        int satisfy = lang_count[ movies[i].subtitle ];

        // 优先比较非常高兴的人数
        if (v_satisfy > max_v_satisfy) {
            max_v_satisfy = v_satisfy;
            max_satisfy = satisfy;
        } 
        // 如果非常高兴的人数相同，再比较基本满意的人数
        else if (v_satisfy == max_v_satisfy) {
            if (satisfy > max_satisfy) {
                max_satisfy = satisfy;
            }
        }
    }

    // 特判：如果最高得分都是 0，说明没有任何科学家能高兴或满意
    if (max_v_satisfy == 0 && max_satisfy == 0) {
        cout << "unsatisfied\n";
        return 0;
    }

    // 第二遍遍历：输出所有满足最优条件的电影编号
    for (int i = 0; i < m; i++) {
        int v_satisfy = lang_count[movies[i].audio];
        int satisfy = lang_count[movies[i].subtitle];

        if (v_satisfy == max_v_satisfy && satisfy == max_satisfy) {
            cout << i + 1 << " "; // 电影编号从 1 开始
        }
    }
    cout << "\n";

    return 0;
}
