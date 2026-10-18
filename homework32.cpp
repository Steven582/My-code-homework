#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m = 1;
	int z = 1;
	
	for (int i=2;i<=n;i++){
		m = m + i;
		z += m; 
	}
	
	cout<<z;
 } 
