#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isrepet(string s);

int issafe(string s){
	
	int type[4] = {0}; 
	for (int i=0;i<s.length();i++){
		if (s[i] >= 'a' && s[i] <= 'z') type[0] = 1;
		if (s[i] >= 'A' && s[i] <= 'Z') type[1] = 1;
		if (s[i] >= '0' && s[i] <= '9') type[2] = 1;
		if (s[i] == '_' || s[i] == '@') type[3] = 1;
	}
	
	int sum = 0;
	for (int i=0;i<4;i++){
		sum += type[i];
	} 
	
	if (isrepet(s)) return 0;
	
	if (sum == 4 && s.length() >= 12) return 3;
	if (sum == 3 && s.length() >= 8 && s.length() < 12) return 2;
	if (sum == 2 && s.length() >= 6 && s.length() < 8) return 1;
	
	return 0;
}


bool isrepet(string s){
	int last_pos[128];
	for (int i=0;i<128;i++) last_pos[i] = -1;
	
	for (int right=0;right < s.length() ; right++){
		char cur = s[right];
		if (last_pos[cur] != -1) return true;
		last_pos[cur] = right;
	}
	return false;
}



int main()
{
	int n;
	cin>>n;
	vector<int> safe(n,0);
	
	for (int i=0;i<n;i++){
		string s;
		cin>>s;
		safe[i] = issafe(s);
	} 
	
	for (int i=0;i<n;i++){
		cout<<safe[i]<<endl;
	}
}
