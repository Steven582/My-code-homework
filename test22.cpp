#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

struct mines{
	int number;
	int distance;
	int x;
	int y;
};

bool cmp(const mines& a, const mines& b){
	if (a.distance != b.distance) return a.distance < b.distance;
	return false;
}

int main()
{
	int n,x,y,k;
	cin>>n>>x>>y>>k;
	
	vector<mines> place;
	int distance = 0;
	int suit = 0;
	
	for (int i=0;i<n;i++){
		int x1,y1;
		cin>>x1>>y1;
		x1 -= x;
		y1 -= y;
		
		distance = x1 * x1 + y1 * y1;
		if (distance <= k * k){
			place.push_back({i+1,distance,x1,y1});
			suit ++;
		}
	}
	
	if (suit == 0){
		cout<<"-1"<<endl<<"-1"<<" "<<"-1";
		return 0;
	}
	
	for (int i=0;i<suit;i++){
		cout<<place[i].number<<" ";
	}
	cout<<endl;
	
	sort(place.begin() , place.end() , cmp);
	cout<<place[0].number<<" "<<place[suit-1].number;
}
