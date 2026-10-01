#include <iostream>
using namespace std;
int main() {
    long long mo, sp, s; 
    cin >> mo >> sp;
    s = mo - sp - 5000;
    long long cost = 0;
    int discount = 0;


    if (s < 0){
    	cout<<0;
	}else{
	

	    if (s <= 3000) {
	        discount = 3;
	    } else if (s <= 12000) {
	        discount = 10;
	        cost -= 210;
	    } else if (s <= 25000) {
	        discount = 20;
	        cost -= 1410;
	    } else if (s <= 35000) {
	        discount = 25;
	        cost -= 2660;
	    } else if (s <= 55000) {
	        discount = 30;
	        cost -= 4410;
	    } else if (s <= 80000){
	        discount = 35; 
	        cost -= 7160;
	    } else {
	    	discount = 45;
	    	cost -= 15160;
		}
	
	    cost += s * discount / 100;

    cout << cost << endl;
    }
}
