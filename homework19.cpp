#include<iostream>
using namespace std;
int main()
{
	int pay,dist;
	char hd;
	int n=0;
	cin>>pay>>hd>>dist;
	
	if( pay >= 5000 ){
		n++;
	}
	
	if( dist <= 2000 ){
		n++;
	}
	if( hd == 'y'){
		n++;
	}
	
	if( n >= 2){
		cout<<"Accept";
	}else{
		cout<<"Refuse";
	}
	
	
}
