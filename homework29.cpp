#include<iostream>
#include<string>
using namespace std;
int main()
{
	int wea[7] = {0};
	int num;
	
	string weather[7] = {
	"",
	"Sunny",
	"Cloudy",
	"Overcast",
	"Light rain",
	"Moderate rain",
	"Heavy rain"};
	
	int n;
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cin>>num;
		if (num >= 1 && num <= 6){
		    wea[num] ++;
		}
	}
	
	for (int i=1;i<=6;i++){
		cout<<weather[i]<<": "<<wea[i];
		if (i < 6){
			cout<<endl;
		}
		
		
	}
	
	
	
}
