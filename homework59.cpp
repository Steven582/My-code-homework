#include<iostream>
#include<vector>
using namespace std;
struct data{
	int audio;
	int subtitle;
	int v_satisfy;
	int satisfy;
};

int main()
{
	int n;
	cin>>n;
	vector<int> sci(n,0);
	for (int i=0;i<n;i++){
		cin>>sci[i];
	}
	
	int m;
	cin>>m;
	data movie[m] = {0};
	for (int i=0;i<m;i++){
		cin>>movie[i].audio;
	}
	for (int i=0;i<m;i++){
		cin>>movie[i].subtitle;
	}
	
	int v_satisfy = 0;
	int satisfy = 0;
	int max_v = 0;
	int max = 0;
	int maxid = 0;
	
	for (int i=0;i<m;i++){
		v_satisfy = 0;
		satisfy = 0;
		for (int j=0;j<n;j++){
			if (sci[j] == movie[i].audio)    movie[i].v_satisfy ++;
			if (sci[j] == movie[i].subtitle) movie[i].satisfy ++;
		}
		
		if (movie[i].v_satisfy > max_v){
			max_v = movie[i].v_satisfy;
			maxid = i;
		}
		
	}
	max = movie[maxid].satisfy;
	
	
	int a = 0;
	for (int i=0;i<m;i++){
		if (max_v == movie[i].v_satisfy && max == movie[i].satisfy){
			cout<<i+1<<" ";
			a++;
		}
	}
	
	if (a == 0){
		cout<<"unsatisfied";
	}
	
	
	
}
