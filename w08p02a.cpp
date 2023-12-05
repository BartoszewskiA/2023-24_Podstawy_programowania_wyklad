#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dane, imie, imie_2 = "", nazwisko;
    int poz_sp, poz_sp_2;
    cout << "Podaj imie i nazwisko: ";
    getline(cin, dane);
    poz_sp = dane.find(' ');
    poz_sp_2 = dane.find(' ', poz_sp + 1);
    if (poz_sp > 0)
    {
        imie = dane.substr(0, poz_sp);
        if (poz_sp_2 < 0) // nie ma drugiej spacji
            nazwisko = dane.substr(poz_sp + 1, dane.length() - poz_sp);
        else
        {
            imie_2 = dane.substr(poz_sp + 1, poz_sp_2 - poz_sp -1);
            nazwisko = nazwisko = dane.substr(poz_sp_2 + 1, dane.length() - poz_sp_2);
        }
    }
    else
    {
        imie = "";
        nazwisko = dane;
    }

    cout << "[" << imie << "][" << imie_2
         << "][" << nazwisko << "]";
    return 0;
}