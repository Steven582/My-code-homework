#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m,k;
	int mon = 0;
	int mone[n + 1] = {0};
	
	for (int i=1;i<=n;i++){
		cin>>m>>k;
		int t,d;
		
		
		for(int j=1;j<=m;j++){
			cin>>t>>d;
			if (t >= k){
				mon += (t - k) * d;
				k = 0;
			}else{
				k -= t;
			}
		}
		
		mone[i] = mon;
		mon = 0;
	
		
	}
	
	for (int i=1;i<=n;i++){
		cout<<mone[i]<<endl;
	}
	
}
