#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	
	int xorr = x ^ y;
	int dis = 0;
	
	for (int i=0;i<=31;i++){
		if ((xorr >> i) & 1){
			dis ++;
		}
	}
	
	cout<<dis;
	
	
}
