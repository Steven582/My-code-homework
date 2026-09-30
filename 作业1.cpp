#include <iostream>

using namespace std;

int main()
{
	int number;
	
	cin >> number;
	
	int one = number % 10;
	int ten = (number / 10) % 10;
	int hundred = number / 100;
	
	cout << one <<" "<< ten <<" "<< hundred << endl; 
}
