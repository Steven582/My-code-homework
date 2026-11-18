#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int day = 0;
	for (int i=0;i<n;i++){
		int c = 0;
		int s = 0;
		
		cin>>c>>s;
		if (s - c > 0) day++;
	}
	cout<<day;
}
