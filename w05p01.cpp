#include <iostream>

using namespace std;

void wypisz_tekst(string tekst);
int dodaj_liczby(int x, int y);

int main()
{
    wypisz_tekst("Ala ma kota");
    cout << dodaj_liczby(10, 30);
    return 0;
}

void wypisz_tekst(string tekst)
{
    cout << "To jest tekst do wypisania: ";
    cout << tekst;
}

int dodaj_liczby(int x, int y)
{
    int wynik = x + y;
    return wynik;
}