#include <iostream>
using namespace std ;

void swap(int a , int b ) 
{ // this will not swap values !
    int temp = a;
    a = b;
    b = temp ;

}
//  call by reference using pointers reference
void swappointer(int *a , int *b ) 
{
    int temp = *a;
    *a = *b;
    *b = temp ;

}

void swaprefvar(int &a , int &b ) 
{ // this will  swap values using c++ reference
    int temp = a;
    a = b;
    b = temp ;

}

int main(){
    int x=4 ,y=7 ;
    cout<< "the value of x is "<<x <<" and y is " << y << endl ;

    swap(x , y) ; // no change in value
    cout<< "the new value of x after using swap is ----> "<<x <<" and y is " << y << endl ;

    swappointer(&x , &y) ; // value changes from x=4 and y=7 to x=7 and y=4
    cout<< "the new value of x after using swappointer is ---->  "<<x <<" and y is " << y << endl ;

    swaprefvar(x , y) ;   // value changes from x=7 and y=4 to x=4 and y=7
    cout<< "the new value of x after using swaprefvar is ---->  "<<x <<" and y is " << y << endl ;
   
    return 0 ;
}