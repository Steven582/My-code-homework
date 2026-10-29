#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for (int i=7;i<=n;i++){
		
		if (i % 7 == 0){
			cout<<i<<" ";
		}else{
			int num = i;
			while (num > 0){
				
				if (num % 10 == 7){
					cout<<i<<" ";
					break;
				}
				num /= 10;
			}
		}
		
	}
	
	
}
