#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int x, suma = 0, n = 0;
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        suma += x;
        tab[n] = x;
        n++;
    }

    double srednia = (double)suma / n;

    for (int i = 0; i < n; i++)
    {
        if (tab[i] > srednia)
            cout << "tab[" << i << "]=" << tab[i] << " ";
    }
    cout << endl
         << "-----------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < srednia)
            cout << "tab[" << i << "]=" << tab[i] << " ";
    }

    return 0;
}