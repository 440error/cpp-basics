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


int main(){
    
     cout << "the sum of 3 and 6 is : "<<sum(3,6) << endl ;
     cout << "the sum of 3,6 and 11 is : "<< sum(3,6,11) << endl ;

    return 0 ;
}