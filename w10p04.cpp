#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
} kartoteka[100];
int n = 0; // liczba dodanych osob

// osoba kartoteka[100];

void dodaj();
void wypisz(osoba ktos);

int main()
{
    dodaj();
    for(int i=0; i<n; i++)
        wypisz(kartoteka[i]);
    return 0;
}

void dodaj()
{
    string temp;

    while (1)
    {
        cout << "Imie: ";
        getline(cin, temp);
        if (temp.length() == 0 || n == 100)
            break;
        kartoteka[n].imie = temp;
        cout << "Nazwisko: ";
        getline(cin, temp);
        kartoteka[n].nazwisko = temp;
        cout << "Wiek: ";
        getline(cin, temp);
        kartoteka[n].wiek = stoi(temp);
        n++;
    }
}

void wypisz(osoba ktos)
{
    cout << "----------------------------------------------------\n";
    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek<<endl;
}