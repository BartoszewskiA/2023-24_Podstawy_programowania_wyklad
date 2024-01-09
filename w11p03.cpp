#include <iostream>

using namespace std;
void wypisz(int *t);
int main()
{
    int tab1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    wypisz(tab1);
    return 0;
}

void wypisz(int *t)
{
    for (int i = 0; i < 10; i++)
        cout << *(t + i) << " ";

    cout << endl;
    
    for (int i = 9; i >= 0; i--)
        cout << t[i] << " ";
}