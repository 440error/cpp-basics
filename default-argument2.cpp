#include <iostream>
using namespace std ;

// int product(int x,int y)
// {
//      return x*y ;
// }

float totalamount(int money, float factor =1.07)
{
    return money*factor ;
}


int main(){
     int  a ,b ;
    // cout << " enter numbers  a and b : " << endl ;
    // cin >> a>>b ;
    // cout << " prdoduct is :" << product (a,b) << endl ; 

    int money ;
    cout << "enter deposited money:  "   ;
    cin>> money ;
    cout << "if u have submitted " << money << endl << "u will recieve " << totalamount(money) << endl ;
    cout << "for VIP if u have submitted " << money << endl << "u will recieve " << totalamount(money,1.12) << endl ;


    return 0 ;
}
