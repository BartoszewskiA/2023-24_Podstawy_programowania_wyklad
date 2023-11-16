#include <iostream>

using namespace std;

int main()
{
    double x = 3.14;
    cout << x;
    funkcja(x);
    return 0;
}

void funkcja(double do_wypisania)
{
    cout << "wewnatrz funkcji: " << do_wypisania;
}
