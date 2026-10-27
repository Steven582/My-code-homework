#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<int> num(n,0);
	for (int i=1;i<=n;i++){
		cin>>num[i];
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n-i;j++){
			if (num[j] > num[j+1]){
				swap(num[j],num[j+1]);
			}
		}
	}
	
	
	for (int i=1;i<=n;i++){
		cout<<num[i]<<" ";
	}
	
}
