#include<iostream>
using namespace std;






int main()
{
	
	int n;
	cin>>n;
	long long step = 2;
	long long step_f = 1;
	
	for (int i=3;i<=n;i++){
		long long temp = step;
		step = step + step_f;
		step_f = temp;
	}
	
	if (n == 1){
		cout<<"1";
		return 0;
	}
	cout<<step;
}
