#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;
    while (i < 5)
    {
        cout << "x(" << i << ")=";
        cin >> x;
        if (x<0) continue;
        i++;
    }
    return 0;
}