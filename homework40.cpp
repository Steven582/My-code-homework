#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	vector<int> r(n+1);
	for(int i=1;i<=n;i++){
		cin>>r[i];
	}
	
	vector<int> teach(n+1,0);
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if (r[i] > r[j]){
				teach[i]++;
			}else if (r[i] < r[j]){
				teach[j]++;
			}
		}
	}
	
	
	
	
	
	for (int i=1;i<=k;i++){
		int x,y;
		cin>>x>>y;
		
		if (r[x] > r[y]){
			teach[x]--;
		} else if(r[x] < r[y]){
			teach[y]--;
		}

	}
	
	for(int i=1;i<=n;i++){
		
	    cout<<teach[i]<<" ";					
    }
	
	
}
