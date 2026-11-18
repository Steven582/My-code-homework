#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<int> a(105,0);
	
	for (int i=0;i<n;i++){
		int num;
		cin>>num;
		
		a[num] ++;
	}
	
	for (int i=100;i>=0;i--){
		if (a[i] != 0) cout<<i<<" "<<a[i]<<endl;
	}
}
