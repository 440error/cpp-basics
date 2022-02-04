#include <iostream>
using namespace std;

int main() 
{
   int x=20 ;
   char ch= 'a' ;
   int* p =&x ;
   
//this is pointers intro

   int* ptr= p ;
   char* ptr1 = &ch ;
   cout << ptr << endl  ;
   cout << ptr1 << endl  ;
   cout << sizeof(ptr) ;

return 0;
}
