#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct data{
	int a;
	int frequency;
};

int main()
{
	string s;
	cin>>s;
	
	data am[128] = {0};
	
	for (int i=0;i<128;i++){
		am[i].a = i;
	}
	
	for (int i=0;i<s.length();i++){
		int m = s[i];
		am[m].frequency ++;
	}
	
	for (int i=0;i<127;i++){
		for (int j=0;j<127-i;j++){
			if (am[j].frequency < am[j+1].frequency){
				swap(am[j],am[j+1]);
			}
		}
	}
	
	for (int i=0;i<128;i++){
		if (am[i].frequency != 0){
			for (int j=0;j<am[i].frequency;j++){
				cout<<(char)am[i].a;
			}
		}else{
			return 0;
		}
	}
	
}
