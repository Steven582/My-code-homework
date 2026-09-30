#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    
   
    if (cin >> n >> m) {
        
        for (int i = 0; i < n; ++i) {
           
            int min_val;
            cin >> min_val;
            
            
            for (int j = 1; j < m; ++j) {
                int num;
                cin >> num;
               
                if (num < min_val) {
                    min_val = num;
                }
            }
            
            
            cout << min_val << endl;
        }
    }
    
    return 0;
}
