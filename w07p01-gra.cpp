#include <iostream>

// 0 - pole puste       -> 1
// 1 - pudlo            -> 1
// 2 - odkryty staek    -> 3
// 3 - trafiony statek  -> 3
// 7 - ukryty statek    -> 3

int plansza[10][10] = {
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

int licznik = 0;
const int AMO = 25;

using namespace std;

void rysuj_plansze(bool odkryj = false);
void strzal(string k, int w);
void sprawdz_sasiednie(int x, int y);
bool koniec_gry();

int main()
{
    rysuj_plansze();
    string kolumna;
    int wiersz;
    do
    {
        rysuj_plansze();
        cout << "Podaj litere: ";
        cin >> kolumna;
        if (kolumna == "x")
            break;
        cout << "Podaj liczbe: ";
        cin >> wiersz;
        strzal(kolumna, wiersz);
    } while (licznik <= AMO && !koniec_gry());
    rysuj_plansze(true);
    return 0;
}

void rysuj_plansze(bool odkryj)
{
    system("cls");
    cout << "\t";
    for (int i = 0; i < 10; i++)
        cout << " " << (char)(i + (int)'A') << " ";
    cout << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 10; j++)
        {
            switch (plansza[i][j])
            {
            case 0:
                cout << " . ";
                break;
            case 1:
                cout << " * ";
                break;
            case 2:
                cout << (char)176 << (char)176 << (char)176;
                break;
            case 3:
                cout << (char)176 << "#" << (char)176;
                break;
            case 7:
                if (odkryj)
                    cout << (char)219 << (char)219 << (char)219;
                else
                    cout << " . ";
            }
        }
        cout << endl;
    }
    cout << "Licznik: " << licznik << endl
         << endl;
}

void strzal(string k, int w)
{
    int y = (int)k[0] - (int)'A';
    int x = w - 1;

    switch (plansza[x][y])
    {
    case 0:
        plansza[x][y] = 1;
        break;
    case 2:
        plansza[x][y] = 3;
        break;
    case 7:
        plansza[x][y] = 3;
        break;
    }
    sprawdz_sasiednie(x, y);
    licznik++;
}

void sprawdz_sasiednie(int x, int y)
{
    if (y < 9 && plansza[x][y + 1] == 7)
        plansza[x][y + 1] = 2;
    if (y > 0 && plansza[x][y - 1] == 7)
        plansza[x][y - 1] = 2;
    if (x < 9 && plansza[x + 1][y] == 7)
        plansza[x + 1][y] = 2;
    if (x > 0 && plansza[x - 1][y] == 7)
        plansza[x - 1][y] = 2;
}

bool koniec_gry()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (plansza[i][j] == 7)
                return false;
    return true;
}
