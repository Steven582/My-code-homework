#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector<int> num(n+1,0);
	
	for (int i=1;i<=n;i++){
		cin>>num[i];
	}
	
	int trend = 0;
	int change = 0;
	bool isNear = true;
	
	if (n < 3){
		cout<<"Yes";
		return 0;
	}
	
	for (int i=n;i>1;i--){
	
		if (num[i] > num[i-1]){
			if (trend == -1){
				change ++;
			}
			trend = 1;
			
		}else if (num[i] < num[i-1]){
			if (trend == 1){
				change ++;
			}
			trend = -1;
		}	
	
    }
	
	if (change > 1){
		isNear = false;
	} 
	
	if (isNear){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	
	
	
	
}
