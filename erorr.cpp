#include <iostream>
using namespace std;
int i = 5;
int main()
{

    if (--i)
    {

        cout << i << endl;

        main();
    }
}