#include <iostream>

using namespace std;

void wypisz_tekst(string tekst = "Brak tekstu");
int dodaj_liczby(int x, int y=111);

int main()
{
    wypisz_tekst();
    cout<<endl;
    cout << dodaj_liczby(100);
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