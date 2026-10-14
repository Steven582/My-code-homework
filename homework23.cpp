#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=0;
	
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
		
		if (num[i] % 4 == 0 || num[i] % 7 == 0){
			m += num[i];
		}
	}
	
	cout<<m;
	
}
