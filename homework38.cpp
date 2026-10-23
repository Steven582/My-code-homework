#include<iostream>
using namespace std;

void PrintBlank(int sum);
void PrintCombine(int n);
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		PrintBlank(n-i);      
        PrintCombine(i);      
        printf("\n"); 
		
	}
}
void PrintBlank(int num){
	for(int i=1;i<=num;i++){
		cout<<" ";
	}
}


void PrintCombine(int n){
	
	long long m = 1;
	for (int i=1;i<=n;i++){
		if (i == 0 || i == n){
			cout<<"1"<<" ";
		}else{
		cout<<m<<" ";
		m = (long long)m * (n - i ) / i;
		}
		
	}
	
}
