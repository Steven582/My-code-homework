#include<iostream>
using namespace std;
int main()
{
	int number;
	int i=0; 
	cin>>number;
	
	do{
		number /= 10;
		i++;
	} while(number != 0);
	
	cout<<i;
	
	
}
