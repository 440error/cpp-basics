#include <iostream>
using namespace std ;

int factorial(int n)
{
    if (n<=1) {
        return 1;
    }
    return n* factorial(n-1);
}
int fib(int n)
{
    if (n<2) {
        return 1;
    }
    return fib(n-2) +fib(n-1);
}
// how code is  executed -----> calculation

// factorial(4) = 4 * factorial(3) 
// factorial(3) = 4 * 3 * factorial(2) 
// factorial(2) = 4 * 3 * 2 * factorial(1) 
// factorial(1) = 4 * 3 * 2 * 1             // if condition is executed
// ----->
// factorial(4) = 24


int main(){
    int a ;
    cout << "enter number: " ;
    cin >> a ;
    // cout << "factorial of " << a << " is " << factorial(a) << endl ; 
    cout << "the term in fibonacci seires at poition " << a << " is " << fib(a) << endl ; 

    return 0 ;
}