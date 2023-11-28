#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "";
    cout << "podaj tekst: ";
    // cin >> s; - wczytuje tylko do pierwszej spacji
    getline(cin, s);
    cout << "wpisales :" << s;
    return 0;
}