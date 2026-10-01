#include<iostream>
using namespace std;
int main()
{
	char words[10][10] = {
		"Zero",
		"One",
		"Two",
		"Three",
		"Four",
		"Five",
		"Six",
		"Seven",
		"Eight",
		"Nine"
    };
	
	char n;
	cin>>n;
	
	if ( n>='0' && n<='9' ){
		int i = n - '0';
		cout<<words[i];
    }else{
    	cout<<"Other";
	}
 } 
