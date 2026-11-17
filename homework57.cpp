#include<iostream>
#include<vector>
using namespace std;
struct evaluate{
	int k;
	int i;
	int e;
};

int main()
{
	int n;
	cin>>n;
	
	vector<evaluate> ev(n);
	
	for (int j=0;j<n;j++) cin>>ev[j].k;
	for (int j=0;j<n;j++) cin>>ev[j].i;
	for (int j=0;j<n;j++) cin>>ev[j].e;
	
	int num = 0;
	for (int p=0;p<n;p++){
		bool is_eliminated = false;
		
		for (int q=0;q<n;q++){
			if (p == q) continue;
			
			if (ev[q].k > ev[p].k && ev[q].i > ev[p].i && ev[q].e > ev[p].e){
				is_eliminated = true;
				break;
			}
		}
		if (is_eliminated) num++;
	}
	cout<<num;
}
