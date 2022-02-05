#include <iostream>
using namespace std ;

int sum(int a ,int b) 
{
    cout << "using function with 2 arguments "  ;
    return a+b ;
}

int sum(int a ,int b,int c ) 
{
    cout << "using function with 3 arguments "  ;
    return a+b+c ;
}

/*here as per seeing the code 
the cout statement must be executed nd then the function call cout one statement
 but in this first it is printing function call cout and the main cout */

 // as per the code is the output should be
 //the sum of 3 and 6 is using function with 2 arguments 9
// while output is coming out 
//  using function with 2 arguments the sum of 3 and 6 is 9


// do comment down if u know why this problem is happening
// since in my friends laptop code  is coming as stated is line 21
int main(){
    
     cout << "the sum of 3 and 6 is : "<<sum(3,6) << endl ;
     cout << "the sum of 3,6 and 11 is : "<< sum(3,6,11) << endl ;


    cout << " thank u " << endl ;
    return 0 ;
}