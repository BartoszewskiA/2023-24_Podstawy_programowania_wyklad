#include <iostream>

using namespace std;

int main()
{
    int tab[11][11];
    for (int j = 0; j < 11; j++)
        for (int i = 0; i < 11; i++)
            tab[j][i] = j * i;
    for (int j = 1; j < 11; j++)
    {
        for (int i = 1; i < 11; i++)
            cout << tab[j][i] << "\t";
        cout << endl;
    }
    return 0;
}