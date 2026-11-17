#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct data{
	int punish;
};

struct Redcard{
	int time;
	char team;
	int player;
} Redcard[205];


			//×Ô¶¨ÒåÅÅĞò 
bool cmp(const redcard& a,const redcard& b){
	if (a.time != b.time) return a.time < b.time;
	if (a.team != b.team) return a.team > b.team;
	return a.player > b.player;
}

int main()
{
	string h,a;
	cin>>h>>a;
	
	data team[205] = {0};
	int n;
	cin>>n;
	
	int redcount = 0;
	vector<Redcard> redcard;
	
	
	for (int i=0;i<n;i++){
		int minute;
		char teams;
		int teamates;
		char punish;
		cin>>minute>>teams>>teamates>>punish;
		
		int idx = teamates;
		if (teams == 'h') idx += 100;
		
		if (team[idx].punish >= 2) continue;
		
		if (teams == 'y'){
			team[idx].punish += 1;
		}else{
			team[idx].punish += 2; 
		}
		
		if (team[idx].punish >= 2){
			Redcard[redcount].time = minute;
			Redcard[redcount].team = teams;
			Redcard[redcount].player = teamates;
			redcount ++;
		}
	}
	
	if (redcount == 0) {
		cout<<"No Red Card";
		return 0;
	}
	
	sort(redcard.begin(),recard.end(),cmp); 
	
	for (int j=0;j<redcount;j++){
		if (Redcard[j].team == 'h'){
			cout<<h<<" "<<Redcard[j].player<<" "<<Redcard[j].time<<endl;
		}else{
			cout<<a<<" "<<Redcard[j].player<<" "<<Redcard[j].time<<endl;
		}
	}
	
	
	
}
