#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int score = 0;
	int redn = 0;
	char ch;
	
	for (int i=1;i<=n;i++){
		
		cin>>ch;
		
		if (ch == 'r'){
			cin>>redn;
			score += redn;
		}
		
		if (ch == 'y'){
			score += 2;
		}
		
		if (ch == 'g'){
			score += 3;
		}
		
		if (ch == 'c'){
			score += 4;
		}
		
		if (ch == 'b'){
			score += 5;
		}
		
		if (ch == 'p'){
			score += 6;
		}
		
		if (ch == 'B'){
			score += 7;
		}
		
		
	}
	
	cout<<score;
	
}
