#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m = n;
	int w = 0;
	
	while (m > 0){
		m /= 10;
		
		w++;
		
	}
	cout<<w;
}
