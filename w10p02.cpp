#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };

    osoba ktos;
    string temp;
    cout << "Imie: ";
    getline(cin,ktos.imie);
    cout << "Nazwisko: ";
    getline(cin, ktos.nazwisko);
    cout << "Wiek: ";
    getline(cin, temp);
    ktos.wiek = stoi(temp);
    cout<<"----------------------------------------------------\n";
    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek;

    return 0;
}