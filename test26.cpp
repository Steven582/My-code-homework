#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string num1,num2;
	cin>>num1>>num2;
	
	int n = num1.length();
	int m = num2.length();
	
	vector<int> res(n + m ,0);
	
	//ÊúÊ½³Ë·¨ 
	for (int i=n-1 ; i>=0 ; i--){
		for (int j=m-1 ;j >=0 ; j--){
			int mul = (num1[i] - '0') * (num2[j] - '0');
			
			int p1 = i + j;
			int p2 = i + j + 1;
			
			int sum = mul + res[p2];
			res[p2] = sum % 10;
			res[p1] += sum / 10;
		}
	}
	
	
	string result = "";		
	int i = 0;
	while (i < res.size()){
		if (result.empty() && res[i] == 0){
			i++;
			continue;
		}
		result.push_back(res[i] + '0');
		i++;
	} 
	
	
	if (result.empty()){
		cout<<"0"; 
		return 0;
	} 
	
	cout<<result;
	
	
	
	
	
	
}
