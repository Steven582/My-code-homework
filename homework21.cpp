#include<iostream>
using namespace std;
int main()
{
	int num[4];
	cin>>num[0]>>num[1]>>num[2]>>num[3];
	int i,n;
	 
	for (i=0;i<3;i++){
		for(n=0;n<3-i;n++){
		
		    if(num[n]>num[n+1]){
		        int temp = num[n];
		        num[n] = num[n+1];
		        num[n+1] = temp;
		    }
			
	    }
	}
	
	int num1[3];
	
	num1[0] = num[3] - num[0];
	num1[1] = num[3] - num[1];
	num1[2] = num[3] - num[2];
	
	for (i=0;i<2;i++){
		for(n=0;n<2-i;n++){
		
		    if(num1[n]>num1[n+1]){
		        int temp = num1[n];
		        num1[n] = num1[n+1];
		        num1[n+1] = temp;
		    }
			
	    }
	}
	
	cout<<num1[0]<<" "<<num1[1]<<" "<<num1[2];
	 
	
}
