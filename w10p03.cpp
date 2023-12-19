#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba ktos;
    string temp;
    cout << "Imie: ";
    getline(cin, ktos.imie);
    cout << "Nazwisko: ";
    getline(cin, ktos.nazwisko);
    cout << "Wiek: ";
    getline(cin, temp);
    ktos.wiek = stoi(temp);
    wypisz(ktos);

    return 0;
}

void wypisz(osoba ktos)
{
    cout << "----------------------------------------------------\n";
    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek;
}