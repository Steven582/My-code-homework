#include<iostream>
using namespace std;

int main()
{

	char ch;
	int h1,h2,m1,m2,s1,s2;
	
	cin>>h1>>ch>>m1>>ch>>s1;
	cin>>h2>>ch>>m2>>ch>>s2;
	
	int n1 = 3600 * h1 + 60 * m1 + s1;
	int n2 = 3600 * h2 + 60 * m2 + s2;
	
	int n = n2 - n1;
	
	int h = n / 3600;
	n %= 3600;
	
	int m = n / 60;
	n %= 60;
	
	int s = n;
	
	cout<<h<<":"<<m<<":"<<s;
	
	
	
}
