#include <iostream>
using namespace std ;

typedef struct student
{
    int rollno ;
    float marks ;
    string name ;
} stu;


union cars
{
    int lamorhghini ;
    char ferrari ;
    float bugatti ; 
};


enum birds{eagle,crow,ostrich} ;

int main(){
    cars c1;
    c1.ferrari = '6' ;
    c1.bugatti = 12.9 ;

    cout << c1.bugatti << endl ;


    stu ayush ;
    stu amit ;
    stu rohan ;
//assigning values to ayush
    ayush.rollno = 16 ;
    ayush.marks = 71 ;
    ayush.name = "ayush" ;

    cout << "the value is " << ayush.rollno << endl ; 
    cout << "the value is " << ayush.marks << endl ; 
    cout << "the value is " << ayush.name << endl ; 



   
       // accessing values of enum #line 20
       birds m1= eagle ;
       cout << m1 << endl;
    //    cout<< eagle  << endl ;
    //    cout<< crow   << endl ;
    //    cout<< ostrich<< endl ;


    return 0 ;
}