#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> num(n+1,0);
	
	for (int i=1;i<=n;i++){
		char ch;
		cin>>ch;
		num[i] = ch;
	}
	
	
	for (int i=1;i<n;i++){
		for (int j=1;j<=n-i;j++){
			if (num[j] > num[j+1]){
				swap(num[j],num[j+1]);
			}
		}
    }
	
	
	for (int i=n;i>=1;i--){
		cout<<(char)num[i];
	}
	
	
	
	
	
}
