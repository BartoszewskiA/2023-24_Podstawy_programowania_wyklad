#include <iostream>

using namespace std;

void ile_razy();

int main()
{
    for (int i = 0; i < 10; i++)
        ile_razy();
    return 0;
}

void ile_razy()
{
    static int ile = 0;
    ile++;
    cout << ile << " ";
}