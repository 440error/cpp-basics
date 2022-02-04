#include <iostream> 
using namespace std ;

int main() {
// looping contructs 
int age ;
cout << "enter ur age : " ;
cin >> age ;

if (age <18) {

cout << endl <<" sorry u can not vote"<<endl ;
}
else if ( age==18){

         string ans ;
         cout << "do u have a voter id card(only enter either yes or no) :  " ;
         cin >> ans ;

         if(ans == "yes" ) {
             cout << " you are able to vote"<< endl ;
         }

         else if ( ans =="no") {
             cout << " go and make voter id first" << endl ;
         }
         else {
             cout << " invalid value entered(enter YES or NO) "  << endl ;  
         }
}
else{
cout << "welcome to voting machine" << endl ;
    }

    return 0 ;
}