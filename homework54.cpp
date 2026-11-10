#include<iostream>
using namespace std;

bool ati(char a){
	if (a == '@'){
		return true;
	}else{
		return false;
	}
}

bool udli(char a){
	if (a == '_'){
		return true;
	}else{
		return false;
	}
}

bool doti(char a){
	if (a == '.'){
		return true;
	}else{
		return false;
	}
}



int main()
{
	
	char a[200];
	cin>>a;

	int n = sizeof(a) / sizeof(a[0]);
	
	for (int i=0;i<n-3;i++){
		
		if (a[i] == '_' || a[i] == '.' || (a[i] < 97 && a[i] > 122)){
			continue;
		}
		
		int at = 0;
		int udl = 0;
		int dot = 0;
		int befor = 0;
		int afte = 0;
		
		for (int j=0;j<n-i;j++){
			
			if ( ati(a[i+j]) ){at ++;}
			if ( udli(a[i+j]) ){udl ++;}
			if ( doti(a[i+j]) ){dot ++;}
			
			if (doti(a[i+j]) && at != 1){
				break;
			}
			if (at > 1 || dot > 1){
				break;
			}
			
			if (dot == 1 && (a[j+i] >= 97 && a[j+i] <= 122)){
				afte ++;
			}
			
			if (at == 0){
				befor ++;
			}
			
		}
		
		cout<<afte*befor<<endl;
		
		
	} 
	
	

	
	
 } 
