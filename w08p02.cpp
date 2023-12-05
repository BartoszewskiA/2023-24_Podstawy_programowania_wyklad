#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dane, imie, nazwisko;
    cout << "Podaj imie i nazwisko: ";
    getline(cin, dane);
    int poz_sp = dane.find(' ');
    if (poz_sp > 0)
    {
        imie = dane.substr(0, poz_sp);
        nazwisko = dane.substr(poz_sp+1, dane.length() - poz_sp);
    }
    else
    {
        imie = "";
        nazwisko = dane;
    }

    cout << "[" << imie << "][" << nazwisko << "]";
    return 0;
}