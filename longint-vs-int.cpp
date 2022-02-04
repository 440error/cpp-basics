#include <iostream>
using namespace std ;


long long int product(long long int x,long long int y)
{
     return x*y ;
}


int main(){
     long long int  a ,b ;
    cout << " enter numbers  a and b : " << endl ;
    cin >> a>>b ;
    cout << " prdoduct is :" << product (a,b) << endl ; 


    return 0 ;
}