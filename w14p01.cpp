#include <iostream>

using namespace std;

struct element
{
    int dana;
    element *nast;
};
element *pocz = NULL;

void dodaj_do_listy(int x);
int zabierz_z_listy();
int policz();
int suma();

int main()
{

    for (int i = 0; i < 20; i++)
        dodaj_do_listy(100 + i);
    cout << "Na liscie jest: " << policz() << endl;
    // cout << "Na liscie bylo: ";
    // cout << zabierz_z_listy() << " ";
    // dodaj_do_listy(1011);
    // cout << zabierz_z_listy() << " ";
    // cout << zabierz_z_listy() << endl;

    while (pocz != NULL)
        cout << zabierz_z_listy() << " ";

    cout << "Na licie jest: " << policz() << endl;
    return 0;
}

void dodaj_do_listy(int x)
{
    element *p = new element;
    p->dana = x;
    p->nast = pocz;
    pocz = p;
}

int zabierz_z_listy()
{
    if (pocz != NULL)
    {
        element *p = pocz;
        pocz = pocz->nast;
        int x = p->dana;
        delete p;
        return x;
    }
    else
    {
        return 0;
    }
}

int policz()
{
    int ile = 0;
    element *p = pocz;
    while (p != NULL)
    {
        p = p->nast;
        ile++;
    }
    return ile;
}

int suma()
{
    int suma = 0;
    element *p = pocz;
    while (p != NULL)
    {
        p = p->nast;
        suma += p->dana;
    }
    return suma;
}
