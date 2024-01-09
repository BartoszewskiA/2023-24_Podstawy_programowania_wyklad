#include <iostream>

using namespace std;

int main()
{
    // int * wsk;
    // wsk = new int;

    int *wsk = new int;
    *wsk = 10;
    cout << *wsk;
    cout << endl;
    delete wsk;

    //cout << *wsk;
    return 0;
}