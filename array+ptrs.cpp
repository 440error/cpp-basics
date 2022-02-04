#include <iostream>
using namespace std ;

int main(){
    
    int marks[] = {19,20,17,23,11} ;
    // for (int i = 0; i < 5; i++)
    // {
    // cout << "value of marks "<< i <<" is: "<< marks[i] <<endl;
    // }

    int i =0 ;
    while ( i<5)
    {
        cout<< "value of marks "<< i << " is: " << marks[i] << endl; 
        i++ ;
    }

    //pointers and arrays
    int* p=marks;
    cout << *(p )  << endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;
    cout << *(++p) << endl;
    return 0 ;
}