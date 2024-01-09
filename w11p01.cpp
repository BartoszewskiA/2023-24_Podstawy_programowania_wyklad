#include <iostream>

using namespace std;

int main()
{

    int x = 100;
    int *wsk = &x;
    cout << "liczba: " << *wsk << " Jest zapisan pod adresem: " << wsk;

    
    return 0;
}