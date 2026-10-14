#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mann = 0;
	int womn = 0;
	
	vector<int> man(n);
	for (int i=0;i<n;i++){
		cin>>man[i];
		if (man[i] >= 178 && man[i] <= 180){
			mann++;
		}
	}
	
	vector<int> wom(n);
	for (int i=0;i<n;i++){
		cin>>wom[i];
		if (wom[i] >= 168 && wom[i] <= 170){
			womn++;
		}
	}
	
	cout<<mann<<" "<<womn;
}
