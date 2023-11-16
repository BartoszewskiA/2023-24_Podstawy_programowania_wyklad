#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (b == 0)
        cout << "Nie dziel przez zero";
    else
    {
        double d = (double)a / b;
        cout << "wynik = " << d;
    }
    return 0;
}