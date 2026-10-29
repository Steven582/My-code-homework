#include<iostream>

using namespace std;

int main()
{
	int x,y;
	
	cin>>x>>y;
	
	int m = x ^ y;
	int distance = 0;
	
	for (int i=0;i<=31;i++){
		if ((m >> i) & 1){
			distance++;
		}
	}
	
	cout<<distance;
	
	
}
