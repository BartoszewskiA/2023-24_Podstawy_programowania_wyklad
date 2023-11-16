#include <iostream>

using namespace std;

int main()
{
    int x;
    int suma = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
            suma = suma + x; // suma +=x;
    } while (x >= 0);
    cout << "suma= " << suma;
    return 0;
}