#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int wide = 0;
	while (n > 0){
		wide ++;
		n /= 10;
		
	}
	cout<<wide;
	
	
}
