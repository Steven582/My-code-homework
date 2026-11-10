#include<iostream>
#include<string>
using namespace std;

void reduction(unsigned long long &a,unsigned long long &b){
	unsigned long long m = a;
	unsigned long long n = b;
	
	while (n != 0){
		unsigned long long temp = m % n;
		m = n;
		n = temp;
	}							//n=0,m
	
	a = a / m;
	b = b / m;
}

int main()
{
	int n;
	cin>>n;
	
	int a[2 * n];
	
	for (int i=0;i<n;i++){
		string s = "";
		cin>>s;
		
		int left = s.find('(');
		
		string no_loop_str = ""; 		//no
		string loop_str = "";			//yes
		
		if (left == string::npos){
			no_loop_str = s.substr(2);
			loop_str = "";
		}else{
			no_loop_str = s.substr(2,left - 2);
			int right = s.find(')');
			loop_str = s.substr(left + 1,right - left - 1);
		}
		
		int len_no_loop = no_loop_str.length();
		int len_loop = loop_str.length();
		
		unsigned long long num_no_loop = no_loop_str.empty() ? 0:stoull(no_loop_str);
		
		string all_str = no_loop_str + loop_str;
		unsigned long long num_all = all_str.empty() ?0:stoull(all_str);
		
		unsigned long long numerator;
		
		unsigned long long denominator = 0;
		
		
		if (len_loop == 0){
			denominator = 1;
			numerator = num_all;
			
			for (int j = 0;j < len_no_loop;j++){
				denominator *= 10;
			}
		}else{
			numerator = num_all - num_no_loop;
			
			for (int j = 0;j < len_loop;j++){
				denominator = denominator * 10 + 9;
			}
			
			for (int j = 0;j <len_no_loop;j++){
				denominator = denominator * 10;
			}
		}
		
		reduction(numerator,denominator);
		
		a[2 * i] = numerator;
		a[2 * i + 1] = denominator;
		//cout<<numerator<<"/"<<denominator<<endl;
		
	}
	
	for (int i=0;i<n;i++){
		cout<<a[2 * i]<<"/"<<a[2 * i + 1]<<endl;
	}
	
	
}
