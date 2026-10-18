#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int total_score = 0;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (s == "r") {
            int count;
            cin >> count;
            total_score += count * 1;
        } else if (s == "y") {
            total_score += 2;
        } else if (s == "g") {
            total_score += 3;
        } else if (s == "c") {
            total_score += 4;
        } else if (s == "b") {
            total_score += 5;
        } else if (s == "p") {
            total_score += 6;
        } else if (s == "B") {
            total_score += 7;
        }
    }
    
    cout << total_score << endl;
    return 0;
}
