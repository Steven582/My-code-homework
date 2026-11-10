#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int num = 0;
	int luck = 0;
	
	for (int i=1;i<=n;i++){
		cin>>num;
		if (num % 4 == 0 || num % 7 == 0){
			luck += num;
		}
	}
	cout<<luck;
}
