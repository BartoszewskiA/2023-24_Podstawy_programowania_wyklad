#include <iostream>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };

    osoba ktos = {"Jan", "Kowalski", 30};

    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek;

    return 0;
}