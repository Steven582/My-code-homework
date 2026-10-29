#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> num(7,0); 
	
	for (int i=1;i<=n;i++){
		int m = 0;
		cin>>m;
		num[m]++;
		
	}
	
    string weather[7] = {"","Sunny","Cloudy","Overcast","Light rain","Moderate rain","Heavy rain"};

    for (int j=1;j<=6;j++){
    	cout<<weather[j]<<":"<<num[j]<<endl;
	}


/*	cout<<"Sunny:"<<num[1]<<endl;
	cout<<"Cloudy:"<<num[2]<<endl;
	cout<<"Overcast:"<<num[3]<<endl;
	cout<<"Light rain:"<<num[4]<<endl;
	cout<<"Moderate rain:"<<num[5]<<endl;
	cout<<"Heavy rain:"<<num[6]<<endl;
*/	
}
