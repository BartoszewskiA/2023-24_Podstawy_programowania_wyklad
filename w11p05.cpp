#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int ile;
    cout << "Ile elementow: ";
    cin >> ile;
    int *tab = new int[ile];

    for (int i = 0; i < ile; i++)
        *(tab + i) = rand() % 101;

    for (int i = 0; i < ile; i++)
        cout << tab[i] << " ";

    delete [] tab;
    return 0;
}