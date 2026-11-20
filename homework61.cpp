#include<iostream>
#include<string>
using namespace std;
bool isrepet(string s);

int judge(string s){
	int type[4] = {0};
	for (int i=0;i<s.length();i++){
		if (s[i] >= 'a' && s[i] <= 'z') type[0] = 1;
		if (s[i] >= 'A' && s[i] <= 'Z') type[1] = 1;
		if (s[i] >= '0' && s[i] <= '9') type[2] = 1;
		if (s[i] == '_' || s[i] == '@') type[3] = 1;
	}
	
	int sum = 0;
	for (int j=0;j<4;j++) sum += type[j];
	
	if (isrepet(s) == false) return 0;
	
	if (s.length() >= 12 ){
		if (sum == 4) return 3;
	}else if(s.length() >= 8){
		if (sum == 3) return 2;
	}else if (s.length() >= 6){
		if (sum == 2) return 1;
	}
	return 0;
}


bool isrepet(string s){
	int last_pos[128];
	for (int j=0;j<128;j++) last_pos[j] = -1;
	
	for (int right = 0;right < s.length() ; right++){
		char a = s[right];
		if (last_pos[a] != -1){
			return false;
		}
		last_pos[a] = right;
	}
	return true;
}


int main()
{
	int n;
	cin>>n;
	int con[n] = {0};
	
	for (int i=0;i<n;i++){
		string s;
		cin>>s;
		
		con[i] = judge(s);
	}
	
	for (int j=0;j<n;j++) cout<<con[j]<<endl;
}
