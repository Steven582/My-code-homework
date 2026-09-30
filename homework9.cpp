#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	
	cin>>t;
	
	double x=200*t;
	double y=3000-4.9*t*t;
	
	cout<<fixed<<setprecision(1)<<x<<","<<fixed<<setprecision(1)<<y;

}
