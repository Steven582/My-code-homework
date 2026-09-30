#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int number[4];
	cin>>number[0]>>number[1]>>number[2]>>number[3];
	int i;
	
	sort(number,number+4);
	
    for(i=3;i>=0;i--){
	    cout<<number[i];
	    if (i>0){
	    	cout<<" ";
		}
		
    }
    

}
