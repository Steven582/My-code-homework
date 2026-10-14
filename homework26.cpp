#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long way_1 = 1;
	long long way_2 = 2;
	long long way = 1;
	if (n >= 3){
		
		for (int i=3;i<=n;i++){
			way = way_1 + way_2;
			way_1 = way_2;
			way_2 = way;
			
		}
	
    }
	
	cout<<way;
}
