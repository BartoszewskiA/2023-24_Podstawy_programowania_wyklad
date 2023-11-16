#include <iostream>

using namespace std;

void zwieksz(int &x);

int main()
{
    int liczba = 1;
    cout << "przed wywolaniem funkcji: " << liczba << endl;
    zwieksz(liczba);
    cout << "po wywolaniu funkcji: " << liczba << endl;
    return 0;
}

void zwieksz(int &x)
{
    x += 10;
    cout << "w trakcie dzialania funkcji: " << x << endl;
}
