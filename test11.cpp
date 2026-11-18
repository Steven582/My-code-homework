#include<iostream>
using namespace std;

bool sevenin(int n){
	int m = n;
	while(m > 0){
		if (m % 10 == 7){
			return true;
		}
		m /= 10;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;

	for (int i=7;i<=n;i++){
		if (i % 7 == 0 || sevenin(i)) cout<<i<<endl;
	}
}
