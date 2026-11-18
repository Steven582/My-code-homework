#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	
	if (m <= 0) return 0;
	
	vector<int> a(n,0);
	
	for (int i=0;i<n;i++){
		int min_val;
		cin>>min_val;
		
		for (int j=0;j<m-1;j++){
			int temp;
			cin>>temp;
			
			if (temp < min_val){
				min_val = temp;
			}
		}
		
		a[i] = min_val;
	}
	
	
	for (int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
