#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct completor{
	string name;
	int scores;
};

//自定义比较函数 
bool cmp(const completor &a,const completor &b){
	return a.scores > b.scores;
}

int main()
{
	int n;
	cin>>n;
	
	completor com[100];
	
	for (int i=0;i<n;i++){
		cin>>com[i].name;
		
		int sum = 0;
		int max = -1;
		int min = 101;
		
		for (int j=0;j<7;j++){
			int score = 0;
			cin>>score;
			
			if (score > max) max = score;
			if (score < min) min = score;
			
			sum += score;
		}
		com[i].scores = sum - max - min;
	}
	
	sort(com , com + n , cmp);
	
	for (int i=0;i<n;i++){
		cout<<com[i].name<<" "<<com[i].scores<<endl;
	}
	
}
