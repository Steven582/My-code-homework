#include<iostream>
#include<climits>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long m = 0;
	
	if(n < INT_MAX && n > INT_MIN){
		while(n != 0){
			m = n % 10 + 10 * m;
			n /= 10;
		}
    }
	cout<<m;
}
