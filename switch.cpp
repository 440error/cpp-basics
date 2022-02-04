#include <iostream>
using namespace std ;


int main()
{
    int age;
    cout << "enter age::" ;
    cin >> age ;
    switch (age)
    {
    case 22:
      cout << " YOU can apply for AFCAT and CDS :)" << endl ;
        break;
    case (17 || 18): // in switch case only 1 condition can be used !!
      cout << " YOU can apply for NDA :D" << endl ;
        break;
    case 20:
      cout << " YOU can apply for AFCAT and CDS after u complete ur graduation XD" << endl ;
        break;
    
    default:
    cout << "Sorry!! currently no exams :(" << endl ;
        break;
    }



return 0;
}