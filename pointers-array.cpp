#include <iostream>

using namespace std;

int main()
{
    string a[] = { "AAAAA", "BBBBB", "CCCCC", "DDDDD" };
    string * ptr= & a[0] ;
    
  cout << ptr           << "    " << *ptr << endl ;
  cout << ++ptr         << "    " << *ptr << endl ;
  cout << (ptr = ptr+1) << "    " << *ptr  << endl ;
  cout << (ptr = ptr+1) << "    " << *ptr << endl ;


return 0 ;
}                                                   
