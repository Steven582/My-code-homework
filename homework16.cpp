#include<iostream>
#include<string>
using namespace std;
void myfi(int a,int b,int &c,int &d)
{
    d = a % b;	
	c = a / b;
}


void outing(int o,string p){

	if ( o != 0 ){
		cout<<o<<p;
	}
	
}



int main()
{
	int n,m,y,y1,f1,f,i;
	cin>>n;
	
	myfi (n,63360,m,y1);
	
	myfi (y1,36,y,f1);
	
	myfi (f1,12,f,i);
	
	outing(m," mi ");
	outing(y," yd ");
	outing(f," ft ");
	outing(i," in ");	
}
