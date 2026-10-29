#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int N,k;
	int t,d;
	
	vector<int> fees(n+1);
	
	for (int i=1;i<=n;i++){
		int fee = 0;
		
		
		cin>>N>>k;
		
		
		for (int j=1;j<=N;j++){
			cin>>t>>d;
			if (t < k){
				k -= t;
				
			}else{
				
				fee += (t - k) * d;
			    k = 0;
				
			}
			
			
		}
		
		fees[i] = fee;
		
	}
	
	for (int i=1;i<=n;i++){
		cout<<fees[i]<<endl;
	}
	
	
}
