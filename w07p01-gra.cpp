#include <iostream>
#include <ctime>

// 0 - pole puste       -> 1
// 1 - pudlo            -> 1
// 2 - odkryty staek    -> 3
// 3 - trafiony statek  -> 3
// 7 - ukryty statek    -> 3

// int plansza[10][10] = {
//     0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
//     7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

int plansza[10][10];
int licznik = 0;
const int AMO = 25;

using namespace std;

void rysuj_plansze(bool odkryj = false);
void strzal(string k, int w);
void sprawdz_sasiednie(int x, int y);
bool koniec_gry();
void czysc_plansze();
bool kolizja(int x, int y);
bool ustaw_statek_1(int x, int y);
bool ustaw_statek_2(int x, int y, int kierunek);
bool ustaw_statek_2(int x, int y, int kierunek);
bool ustaw_statek_4(int x, int y, int kierunek);
void wylosuj_plansze();

int main()
{
    srand(time(NULL));
    wylosuj_plansze();
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

void czysc_plansze()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            plansza[i][j] = 0;
}

bool kolizja(int x, int y)
{
    if (plansza[x][y] == 7)
        return true; // pole było zajęte

    if (x < 0 || x > 9 || y < 0 || y > 9)
        return true; // pole poza plansza

    if (plansza[x - 1][y] == 7)
        return true; // po lewej
    if (plansza[x + 1][y] == 7)
        return true; // po prawej
    if (plansza[x][y - 1] == 7)
        return true; // góra
    if (plansza[x][y + 1] == 7)
        return true; // dół

    if (plansza[x - 1][y - 1] == 7)
        return true; // lewa górna
    if (plansza[x - 1][y + 1] == 7)
        return true; // lewa dolna
    if (plansza[x + 1][y - 1] == 7)
        return true; // praw górna
    if (plansza[x + 1][y + 1] == 7)
        return true; // lewa górna

    return false;
}

bool ustaw_statek_1(int x, int y)
{
    if (kolizja(x, y) == true)
        return false;
    else
        plansza[x][y] = 7;
    return true;
}

bool ustaw_statek_2(int x, int y, int kierunek) // kierunek==0 - poziomo w prawo
                                                // kierunek==1 - pionowo w dół
{
    if (kierunek == 0 && !kolizja(x, y) && !kolizja(x + 1, y))
    {
        plansza[x][y] = 7;
        plansza[x + 1][y] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(x, y) && !kolizja(x, y + 1))
    {
        plansza[x][y] = 7;
        plansza[x][y + 1] = 7;
        return true;
    }
    return false;
}

bool ustaw_statek_3(int x, int y, int kierunek) // kierunek==0 - poziomo w prawo
                                                // kierunek==1 - pionowo w dół
{
    if (kierunek == 0 && !kolizja(x, y) && !kolizja(x + 1, y) && !kolizja(x + 2, y))
    {
        plansza[x][y] = 7;
        plansza[x + 1][y] = 7;
        plansza[x + 2][y] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(x, y) && !kolizja(x, y + 1) && !kolizja(x, y + 2))
    {
        plansza[x][y] = 7;
        plansza[x][y + 1] = 7;
        plansza[x][y + 2] = 7;
        return true;
    }
    return false;
}

bool ustaw_statek_4(int x, int y, int kierunek) // kierunek==0 - poziomo w praw
                                                // kierunek==1 - pionowo w dół
{
    if (kierunek == 0 && !kolizja(x, y) && !kolizja(x + 1, y) && !kolizja(x + 2, y) && !kolizja(x + 3, y))
    {
        plansza[x][y] = 7;
        plansza[x + 1][y] = 7;
        plansza[x + 2][y] = 7;
        plansza[x + 3][y] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(x, y) && !kolizja(x, y + 1) && !kolizja(x, y + 2) && !kolizja(x, y + 3))
    {
        plansza[x][y] = 7;
        plansza[x][y + 1] = 7;
        plansza[x][y + 2] = 7;
        plansza[x][y + 3] = 7;
        return true;
    }
    return false;
}

void wylosuj_plansze()
{
    czysc_plansze();
    int x, y, k, n;
    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_4(x, y, k) == true)
            n++;
    } while (n < 1);

    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_3(x, y, k) == true)
            n++;
    } while (n < 3);

    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_2(x, y, k) == true)
            n++;
    } while (n < 4);

    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        if (ustaw_statek_1(x, y) == true)
            n++;
    } while (n < 5);
}
