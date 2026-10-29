#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int out= 0;
	int in = 0;
	
	int max = 0;
	int maxid = 0;
	
	for (int i=1;i<=n;i++){
		int profit = 0;
		cin>>out>>in;
		profit = in - out;
		
		if (max < profit){
			max = profit;
			maxid = i;
		}
	}
	
	cout<<maxid;
	
	
	
}
