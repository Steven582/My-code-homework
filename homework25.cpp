#include<iostream>
using namespace std;

long long way(long long a){
	long long b;
	if (a == 1 || a == 2){
		b = 1;
	}else{
		b = way(a - 1) + way(a - 2);
	}
		
	return b;
	
}

int main()
{
	long long n;
	cin>>n;
	cout<<way(n);
    
}
