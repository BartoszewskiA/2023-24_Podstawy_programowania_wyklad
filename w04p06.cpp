#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    bool powt;
    int tab[6];
    int i = 0, x;
    do
    {
        powt = false;
        x = rand() % 49 + 1;
        for (int j = 0; j < i; j++)
        {
            if (x == tab[j])
                powt = true;
        }
        if (powt == true)
            continue;
        tab[i] = x;
        i++;
    } while (i < 6);

    for (int j = 0; j < 6; j++)
        cout << tab[j] << " ";
    return 0;
}