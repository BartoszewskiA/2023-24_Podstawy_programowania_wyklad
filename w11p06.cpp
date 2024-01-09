#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int *tab[10];
    for (int i = 0; i < 10; i++)
    {
        tab[i] = new int;
        *tab[i] = rand() % 101;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<*tab[i]<<" ";
    }

    for(int i=0; i<10; i++)
        delete tab[i];

    return 0;
}