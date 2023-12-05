#include <iostream>
#include <string>

using namespace std;

int main()
{
    int litery[26] = {0};
    int poz = 0;
    char znak;
    string tekst;
    cout << "Podaj tekst do przeszukania: ";
    getline(cin, tekst);

    // for (int i = 0; i < tekst.length(); i++)
    //     tekst[i] = towlower(tekst[i]);

    for (int i = 0; i < tekst.length(); i++)
    {
        poz = (int)tekst[i] - (int)'a';
        if (poz >= 0 && poz < 26)
            litery[poz]++;
    }

    for (int i = 0; i < tekst.length(); i++)
    {
        poz = (int)tekst[i] - (int)'A';
        if (poz >= 0 && poz < 26)
            litery[poz]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (litery[i] > 0)
        {
            znak = (char)(i + (int)'a');
            cout << znak << " : " << litery[i] << endl;
        }
    }

    return 0;
}