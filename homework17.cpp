#include<iostream>
#include<iomanip>
using namespace std;

void tc(int a,int b,int &c,int &d)
{ 
	if ( d == 1){
		b--;
	}
	
	if ( b - a < 0){
 		d = 1;
 		c = b + 60 - a;
	}else{
		d = 0;
		c = b - a;
	}
}




int main()
{
	int h1,m1,s1,h2,m2,s2,h,m,s;
	int w = 0;
	char ch;
	cin>>h1>>ch>>m1>>ch>>s1>>h2>>ch>>m2>>ch>>s2;
	
	tc(s1,s2,s,w);
	tc(m1,m2,m,w);
	tc(h1,h2,h,w);
	
	cout<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s;
}
