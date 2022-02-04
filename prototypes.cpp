#include <iostream>
using namespace std ;

/*function prototype syntax ---->
type function name (arguments) ; */

// function prototype for SUM function
int sum(int ,int ) ;
// function prototype for void function
void def() ;

int main(){

        int a,b ;
        cout << "enter value of a : " ;
        cin >> a;
        cout << "enter value of b : " ;
        cin >> b;
        sum(a,b);        // a and b are actual parameters
        def();

    return 0 ;
}

// num1 and num2 are formal parameters and will take values from actual a and b
int sum(int num1,int num2)
{
    cout << num1+num2 << endl ;

}

void def()
{
    cout << "program ended successfully  BYE!!" << endl ; 
}