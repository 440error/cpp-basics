#include <iostream>
using namespace std ;

int main(){ //declaring pointers 
     int a= 3 ;          // & ---> (address of) operator
     int* b =&a ;

// * ---> value at dereference operator
     cout<< "the value of a is:  " << *b  << endl;  
     cout<< "address of a is:  " << b << endl ;

//pointer to pointer 
     int** c  =&b ;
     cout << "address of b is: "<<  c  << endl ;
     cout << "value of b is: "  <<  *c << endl ;
     cout << "value of a is: "  << **c << endl ;

       
            
    return 0 ;
}