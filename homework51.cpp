#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	vector<int> num(1000000,0);
	vector<int> ans(n+1,0);
	
	int wide = 0;
	
	for (int i=1;i<=n;i++){
	    
	    int x,y;
	    cin>>x>>y;
	    if (y > wide){
	    	wide = y;
		}
		
		num[x] ++;
		num[y+1] --;
		
	} 
	
	int cover = 0;
	for (int i=0;i<=wide;i++){
	
		cover = cover + num[i];
		
		if (cover >=1 && cover <=n){
			ans[cover] ++;
		}
		
		
	}
	
	for (int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	
	
}
