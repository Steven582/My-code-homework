#include<iostream>
#include<cmath>
#include"judge.h"
using namespace std;

bool prime(int a){
	if (a<2){
		return false;
	}else if(a == 2){
		return true;
	}else if(a % 2 == 0){
		return false;
	}
	
	int n = sqrt(a);
	
	for (int i=3;i<=n;i+=2){
		if (a % i == 0){
		    return false;
		}
	}
	return true;
	
}


bool plalindrome(int a){
	int c = 0;
	int b = 0;
	int m = a;
	
	while (a > 0){
		b = a % 10;
		a /= 10;
		c = c * 10 + b;
	}
	
	if (c == m){
		return true;
	}else{
		return false;
	}
}











	


