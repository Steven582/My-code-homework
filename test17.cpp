#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<int> a(128,0);
	char b;
	
	for (int i=0;i<n;i++){
		cin>>b;
		a[b] ++;
	}
	
	for (int i=127;i>=0;i--){
		if (a[i] != 0) cout<<(char)i<<":"<<a[i]<<" ";
	}
}
