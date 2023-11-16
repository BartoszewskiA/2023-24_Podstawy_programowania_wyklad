#include <iostream>

using namespace std;

int main()
{
    int x;
    int i=0;
    int suma = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
        {
            suma = suma + x; // suma +=x;
            i++;
        }
    } while (x >= 0);

    cout << "suma= " << suma<<endl;
    if(i!=0)
        cout <<"srednia= " << (double)suma/i;
    else
        cout<< "brak danych";
    return 0;
}