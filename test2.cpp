#include<iostream>
#include<climits> 
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long rev = 0; 

    while (n != 0) {
        int pop = n % 10; 
        n /= 10;          
        rev = rev * 10 + pop; 
    }

    if (rev > INT_MAX || rev < INT_MIN) {
        cout << "0" << endl;
    } else {
        cout << rev << endl;
    }

    return 0;
}
