#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> num(105,0);
	
	for (int i=1;i<=100;i++){
		cin>>num[i];
	}
	
	for (int i=1;i<100;i++){
		for (int j=1;j<=100-i;j++){
			if (num[j] > num[j+1]){
				swap(num[j],num[j+1]);
			}
		}
	}
	
	
	for (int i=100;i>=1;i--){
		cout<<num[i];
		if (i > 1){
			cout<<" ";
		}
		
	}
	
	
	
	
}
