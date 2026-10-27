#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	vector<int> position(n+1,0);
	
	for(int i=1;i<=n;i++){
		cin>>position[i];
	}
	
	int num = 2;
	
	
	for (int i=1;i<n;i++){
		
		if (2 * d == position[i+1] - position[i]){
			num++;
		}else if (2 * d < position[i+1] - position[i]){
			num+=2;
		}
		
	}
	
	
	cout<<num;
	
	
	
}
