#include <iostream>
#include <ctime>
const int ILE = 100;

struct RGB
{
    int R;
    int G;
    int B;
} tab[ILE];

using namespace std;

RGB losuj_kolor();
int main()
{
    srand(time(NULL));
    for (int i = 0; i < ILE; i++)
        tab[i] = losuj_kolor();

    for (int i = 0; i < ILE; i++)
        cout << "("
             << tab[i].R << ";"
             << tab[i].G << ";"
             << tab[i].B
             << ")"<<endl;
    return 0;
}

RGB losuj_kolor()
{
    RGB kolor;
    kolor.R = rand() % 256;
    kolor.G = rand() % 256;
    kolor.B = rand() % 256;
    return kolor;
}