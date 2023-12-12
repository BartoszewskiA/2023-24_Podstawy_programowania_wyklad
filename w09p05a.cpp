#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string tab[1000];
int n = 0; // aktualna pozycja w tablicy - pierwsze wolne miejsce
int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad operacji dyskowych";
        return 0;
    }
    string s;
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length() > 0)
        {
            tab[n] = s;
            n++;
        }
    }
    plik.close();

    for (int i = 0; i < n; i++)
        cout << i + 1 << ":" << tab[i] << endl;
    return 0;
}