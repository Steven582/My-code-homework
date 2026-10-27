#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	
	for (int i=1;i<=n;i++){
	
		int m;
		cin>>m;	
		vector<int> num(m+1,0);
		
		for (int j=1;j<=m;j++){
			cin>>num[j];
	    }
		
		bool isWave = true;
		int position = 0;
		int lasttrend = 0;
		
		for (int j=2;j<=m;j++){
			
			
			if (num[j] > num[j-1]){
				position = 1;
			}else if(num[j] < num[j-1]){
				position = -1;
			}else{
				isWave = false;
				break;
			}
			
			if (position == lasttrend){
				isWave = false;
				break;
			}
			lasttrend = position;
		
	    }
	    
		
		if (isWave){
	    	cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
    }
}	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
 
