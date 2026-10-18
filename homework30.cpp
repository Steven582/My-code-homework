#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int o;
	int c,s;
	int m = INT_MIN;
	int best = 0;
	
	for (int i=1;i<=n;i++){
		cin>>c>>s;
		o = s - c;
		
		if (o > m){
			m = o;
			best = i;
		}	
	}
	
	cout<<best;
	
}
