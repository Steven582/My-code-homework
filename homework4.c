#include<stdio.h>
int main()
{
	long number;
	scanf("%ld",&number);
	
	int three;
	int five;
	int seven;
	int s;
	
	three = number % 3;
	five = number % 5;
	seven = number % 7;
	
	if (three==0 && five == 0 && seven == 0){
		s=7;
	}else if (three == 0 && five == 0){
		s=6;
	}else if (three == 0 && seven == 0){
		s=5;
	}else if (five == 0 && seven == 0){
		s=4;
	}else if (three == 0){
		s=3;
	}else if (five == 0){
		s=2;
	}else if (seven == 0){
		s=1;
	}else{
		s=0;
	}
	
	
	if (s==1){
		printf("It's divisible by 7");
	}
	if (s==2){
		printf("It's divisible by 5");
	}
	if (s==3){
		printf("It's divisible by 3");
	}
	if (s==4){
		printf("It's divisible by 5,7");
	}
	if (s==5){
		printf("It's divisible by 3,7");
	}
	if (s==6){
		printf("It's divisible by 3,5");
	}
	if (s==7){
		printf("It's divisible by 3,5,7");
	}
	if (s==0){
		printf("null");
	}
	
	
	
	

	
	
	
	
	
	
}
