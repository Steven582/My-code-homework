#include<iostream>
#include<vector>

using namespace std;

int compute(int n){
	vector<int> odd(n+1,0);
	vector<int> even(n+1,0);
	
	odd[1] = 1;
	odd[2] = 1;
	
	even[1] = 0;
	even[2] = 1;
	
	for (int i=3;i<=n;i++){
		even[i] = even[i-1] + even[i-2];
		odd[i] = odd[i-2] + odd[i-1];
	}
	
	return odd[n];
}





int main()
{
	int n;
	cin>>n;
	
	cout<<compute(n);
	
	
}
