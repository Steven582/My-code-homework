#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	if (n <= 0) return 0;
	
	vector<int> a(n,0);
	
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){		//ÀÏÒõB 
			if (a[j] < a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	
	for (int i=0;i<n;i++){
		cout<<a[i];
		if (i != n-1) cout<<" ";
	}
}
