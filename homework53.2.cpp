#include <iostream>
#include <vector>
using namespace std;

// 传入平年的12个月份天数，如果要检查闰年，只需特判 2月（索引为1）
int normal_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 检查给定的序列 indays 能否匹配以 start_month 开始的连续月份（平年）
// 如果是闰年（is_leap），则 2 月份允许是 29
bool check(const vector<int>& indays, int start_month, bool is_leap) {
    int n = indays.size();
    for (int j = 0; j < n; j++) {
        // 当前检查的是几月份（取模 12，保证循环）
        int month_idx = (start_month + j) % 12; 
        int expected = normal_days[month_idx];
        
        // 如果是闰年且匹配到了2月，期望值改为 29
        if (is_leap && month_idx == 1) {
            expected = 29;
        }
        
        // 如果实际输入的天数不等于预期的天数，则匹配失败
        if (indays[j] != expected) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> indays(n);
    for (int i = 0; i < n; i++) {
        cin >> indays[i];
    }
    
    // 从1月到12月，尝试作为起点
    for (int start = 0; start < 12; start++) {
        // 尝试平年
        if (check(indays, start, false)) {
            cout << "Yes" << endl;
            return 0;
        }
        // 尝试闰年
        if (check(indays, start, true)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}
