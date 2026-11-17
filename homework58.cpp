#include<iostream>
using namespace std; 
struct data{
	int city;
};

int main()
{
	int n,m;
	cin>>n>>m;
	
	data candidate[105] = {0};
	
	for (int i=0;i<m;i++){
		int city_max = 0;
		int city_maxid = 0;
		for (int j=0;j<n;j++){
			int city_n;
			cin>>city_n;
			if (city_max < city_n ){
				city_max = city_n;
				city_maxid = j;
			}
		}
		candidate[city_maxid].city ++;
	}
	
	int i = 0;
	int max = 0;
	int maxid = 0;
	for (int j=0;j<n;j++){
		if (candidate[j].city > max){
			max = candidate[j].city;
			maxid = j;
		}
	}
	cout<<maxid+1;
	
}
