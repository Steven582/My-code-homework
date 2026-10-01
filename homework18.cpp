#include<iostream>
using namespace std;

int spt(int a,double b,double c)
{
	int d;

	d = a / b + c;
	
	return d;
}


int main()
{
	int dist,s;
	int bt,wt;
	char ch;
	cin>>dist>>ch;
	
	bt = spt(dist,3.0,50.0);
	wt = spt(dist,1.2,0.0);
	
	if( bt < wt ){
		cout<<"Bike";
	}else if( bt > wt ){
		cout<<"Walk";
	}else{
		cout<<"All";
	}
}
