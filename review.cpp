#include<iostream>

using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	int x = 0;
	int y = 0;
	
	while(n != 0){
		x = n % 10;
		n /= 10;
		y = 10 * y + x;
	}
	
	cout<<y;
	
}
