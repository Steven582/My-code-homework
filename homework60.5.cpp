#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Player {
    int punish = 0; 
};

											// 记录红牌事件
struct RedCard {
    int time;
    char team;
    int player;
};

													// 自定义排序规则
bool cmp(const RedCard& a, const RedCard& b) {
    if (a.time != b.time) {
        return a.time < b.time; 					// 1. 时间小的在前
    }
    if (a.team != b.team) {
        return a.team > b.team; 					// 2. 时间相同，'h'(ASCII 104) > 'a'(97)，保证主队在前
    }
    return a.player > b.player; 					// 3. 时间相同且同队，编号大的在前
}

int main() {
    ios_base::sync_with_stdio(false); 				// 优化输入输出速度
    cin.tie(NULL);

    string home_name, away_name;
    cin >> home_name >> away_name;
    
    int n;
    cin >> n;
    
    Player team[205]; 								// 1-99 为客队，101-199 为主队
    vector<RedCard> redCards;
    
    for (int i = 0; i < n; i++) {
        int time;
        char team_type;
        int player_id;
        char card_type;
        cin >> time >> team_type >> player_id >> card_type;
        
        // 计算数组索引，防止主客队编号冲突
        int idx = player_id;
        if (team_type == 'h') {
            idx += 100;
        }
        
        											// 如果已经被罚下了，直接忽略后续记录
        if (team[idx].punish >= 2) {
            continue; 
        }
        
        											// 增加罚分
        if (card_type == 'y') {
            team[idx].punish += 1;
        } else {
            team[idx].punish += 2;
        }
        
        // 如果首次达到红牌条件，记录该事件
        if (team[idx].punish >= 2) {
            redCards.push_back({time, team_type, player_id});		//在动态数组末尾加上 
        }
    }
    
    // 如果没有红牌
    if (redCards.empty()) {
        cout << "No Red Card\n";
        return 0;
    }
    
    // 按照题目要求对红牌记录进行排序
    sort(redCards.begin(), redCards.end(), cmp);
    
    // 按顺序输出
    for (const auto& rc : redCards) {
        if (rc.team == 'h') {
            cout << home_name << " " << rc.player << " " << rc.time << "\n";
        } else {
            cout << away_name << " " << rc.player << " " << rc.time << "\n";
        }
    }
    
    return 0;
}
