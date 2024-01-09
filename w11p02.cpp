#include <iostream>

using namespace std;

int main()
{

    int x = 100;
    int *wsk = &x;
    //x++;
    //*wsk = *wsk + 1;
    // wsk++; -- zle
    (*wsk)++;
    cout << "x=" << x << endl
         << "*wsk=" << *wsk;

    return 0;
}