#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ile razy wypisac? ";
    cin >> n;
    int i = 0;
    do
    {
        cout << i + 1 << ": Naucze sie c++" << endl;
        i++;
    } while (i < n);

    return 0;
}