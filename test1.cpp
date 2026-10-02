#include<iostream>
using namespace std;

int main()
{
	long long x,m;
	int step = 0;
	cin>>x>>m;
	
	if (x < 0){
		x = -1 * x;
	}

    while (x > 0){
	
		step += x / (2 * m - 1);
	    x %= (2 * m - 1);
		do{
		
		    m--;
		}while( x < 2 * m - 1 && m > 0);
			
    }
    
    cout<<step;
    
    
}
