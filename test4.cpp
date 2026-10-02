#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	int i=0;
    int n2 = n;
	
	while (n > 0){
		m = n % 10;
		n = n / 10;
		
		if (m % 2 == 0){
			i += 2 * m;
		}else{
			i += 3 * m + 1;
		}
		
	}
	
	
	
	int x = 0;
	
	int n1;
	n1=(int)sqrt(n2);
	
	if (n <= 1){
		x = 1;
	}else{
		for (int i1=2;i1<=n1;i1++){
	        if(n2%i1 == 0){
		        x = 1;
				break;
			
	        } else{
		        x = 0;
	        }
	    }
    }
	cout<<i<<endl;
	
	if(x == 0){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
}
