#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int boy = 0;
	for (int i=0;i<n;i++){
		int height;
		cin>>height;
		
		if (height >= 178 && height <= 180) boy++;
	}
	
	int girl = 0;
	for (int i=0;i<n;i++){
		int height;
		cin>>height;
		
		if (height >= 168 && height <= 170) girl++;
	}
	cout<<boy<<" "<<girl;
}
