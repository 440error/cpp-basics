#include<iostream>
using namespace std ;



float totalamount(float factor =1.07,int money=10000)
{
    return money*factor ;
}


int main(){
     int  a ,b ;
    // cout << " enter numbers  a and b : " << endl ;
    // cin >> a>>b ;
    // cout << " prdoduct is :" << product (a,b) << endl ; 

    int money ;

    cout  << "enter deposited money:  "   ;
    cin>> money ;
    cout << "if u have submitted " << money << endl << "u will recieve " << totalamount( money) << endl ;
    cout << "for VIP if u have submitted " << money << endl << "u will recieve " << totalamount(1.12 ,money) << endl ;

     return 0;
 }