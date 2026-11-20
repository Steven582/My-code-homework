#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    
    vector<int> row_walls(n, 0); // 记录每行的墙数
    vector<int> col_walls(m, 0); // 记录每列的墙数
    int total_walls = 0;         // 总墙数
    
    // 1. 读取地图并统计墙的数量
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '*') {
                row_walls[i]++;
                col_walls[j]++;
                total_walls++;
            }
        }
    }
    
    // 2. 找出单行最多能炸毁多少堵墙，单列最多能炸毁多少堵墙
    int max_row = 0;
    for (int i = 0; i < n; ++i) {
        if (row_walls[i] > max_row) max_row = row_walls[i];
    }
    int max_col = 0;
    for (int j = 0; j < m; ++j) {
        if (col_walls[j] > max_col) max_col = col_walls[j];
    }
    
    // 3. 将“墙数最多”的行和列的下标存起来
    vector<int> best_rows;
    vector<int> best_cols;
    for (int i = 0; i < n; ++i) {
        if (row_walls[i] == max_row) best_rows.push_back(i);
    }
    for (int j = 0; j < m; ++j) {
        if (col_walls[j] == max_col) best_cols.push_back(j);
    }
    
    // 4. 遍历最优的行与列的组合
    for (int r : best_rows) {
        for (int c : best_cols) {
            int destroyed = row_walls[r] + col_walls[c];
            if (grid[r][c] == '*') {
                destroyed--; 				// 如果交叉点本身就是墙，会被重复计算一次，需要减去 1
            }
            
			
			// 如果覆盖的墙数等于总墙数，说明全部炸毁
            if (destroyed == total_walls) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
