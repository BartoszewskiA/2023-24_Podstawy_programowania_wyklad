#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("w9p01.log", ios::in);
    if (!plik.good())
    {
        cout << "Blad";
        return 0;
    }
    string s;
    getline(plik, s);
    int ile = atoi(s.c_str());
    plik.close();
    //------------------------------------------------------------
    plik.open("w9p01.log", ios::out);
    plik << ++ile;
    plik.close();

    if (ile >= 5)
    {
        cout << "Skonczyl sie okres testowy" << endl
             << "wykup wersje pro";
        return 0;
    }
    cout << "Program dziala";

    return 0;
}