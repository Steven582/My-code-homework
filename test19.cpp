#include<iostream>
using namespace std;

int sum_divisor(int n){
	int sum = 1;
	for (int i=2; i<n ;i++){
		if (n % i == 0) sum += i;
	}
	return sum;
}

int main()
{
	int s;
	cin>>s;
	
	for (s;s;s){
		int friend1 = sum_divisor(s);
		int friend2 = sum_divisor(friend1);
		if (friend2 == s){
			cout<<s<<" "<<friend1;
			return 0;
		}
		s++;
	}
}
