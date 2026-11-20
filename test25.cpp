#include<iostream>
#include<vector>
using namespace std;
struct data{
	int number;
	int article;
};

int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<data> record(m+1);
	vector<int> cup(m+1,0);
	
	for (int i=0;i<n;i++){
		int num;
		cin>>num;
		
		for (int j=0;j<m;j++) cup[j+1] = 0;
		
		for (int j=0;j<num;j++){
			int temp;
			cin>>temp;
			cup[temp] = 1;
			record[temp].number ++;
		}
		
		for (int j=0;j<m;j++){
			if (cup[j+1] == 1) record[j+1].article ++;
		}
	}
	
	for (int i=0;i<m;i++){
		cout<<record[i+1].article<<" "<<record[i+1].number<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
