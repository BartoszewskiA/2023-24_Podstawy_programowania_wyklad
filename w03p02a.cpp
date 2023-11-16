#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ile razy wypisac? ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << i + 1 << ": Naucze sie c++" << endl;
        i++;
    }

    return 0;
}