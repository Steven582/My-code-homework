#include<iostream>
#include<vector>

using namespace std;

void Year(int a,int n){
	int days1[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int days2[] = {28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31};
	for (int i=1;i<=a;i++){
    bool isfit = true;
		for (int j=1;j<=n;j++){
			
			if (indays[j] != days1[i+j-1]){
				isfit = false;
				break;
			}
		}
		
		if (isfit){
			cout<<"Yes";
			return 0;
		}	
	}
}


int main()
{
	int n;
	cin>>n;
	int days1[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int days2[] = {28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31};
	vector<int> indays(n+1,0);
	
	for (int i=1;i<=n;i++){
		cin>>indays[i];
	}
	
//这是平年判断 
/*	for (int i=1;i<=12;i++){
    bool isfit = true;
		for (int j=1;j<=n;j++){
			
			if (indays[j] != days1[i+j-1]){
				isfit = false;
				break;
			}
		}
		
		
		if (isfit){
			cout<<"Yes";
			return 0;
		}
		
	}
	
*/	
 //这是闰年判断
/* 
	for (int i=1;i<=30;i++){
    bool isfit = true;
		
		for (int j=1;j<=n;j++){
			
			if (indays[j] != days2[i+j-1]){
				isfit = false;
				break;
			}
		}
		
		
		if (isfit){
			cout<<"Yes";
			return 0;
		}
		
	}
*/



	Year(12,n);
	Year(30,n);

	
	
	cout<<"No";
	
	
	
	
	
	
}
