#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane2.txt", ios::out);
    plik << "tekst do wypisania" << endl
         << "i druga linia";
    // string s = "aaaaaa";
    // plik.write(s.c_str(), s.length());
    plik.close();
    return 0;
}