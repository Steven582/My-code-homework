#include<iostream>
using namespace std;
int main()
{
	
	int n,x,y,s;
	cin>>n>>x>>y;
	
	if ( x == 0 ){
		s=0;
	}else{
		s = n - ( x + y - 1 )/ x;
	}
	
	
	if (s<0){
		s = 0;
	}		
	
	cout<<s;
}
