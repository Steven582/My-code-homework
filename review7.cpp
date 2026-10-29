#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int ffloor = 0;
	int nfloor = 0;
	
	int time = 0;
	
	for (int i=1;i<=n;i++){
		cin>>nfloor;
		
		if (nfloor - ffloor > 0){
			time += (nfloor - ffloor) * 6;
		}else if (nfloor - ffloor < 0){
			time += (ffloor - nfloor) * 4;
		}
		
		time += 5;
		
		ffloor = nfloor;
	}
	
	cout<<time;
	
	
	
}
