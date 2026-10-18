#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x = 0;
	int y;
	int up = 0;
	int dw = 0;
	
	
	for (int i=0;i<n;i++){
		cin>>y;
		
		if (y - x > 0){
			up += y - x;
		}else if (y - x < 0){
			dw += x - y;
		}
	
		x = y;
		
    }
    
    int time = 5 * n + 6 * up + 4 * dw;
		
	cout<<time;
		
}
