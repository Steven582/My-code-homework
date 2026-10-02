#include<iostream>
using namespace std;
int main()
{
	int n;
	int num=0;
	int range;
	cin>>range;
	
	for (n = 1;n<=range;n++){
	    num = 0;
	
		for (int i=1; i < n; i++){
			if (n % i == 0){
				num += i;
			}
		}
		
		if (num == n){
			cout<<n<<endl;
		}
    }
}
