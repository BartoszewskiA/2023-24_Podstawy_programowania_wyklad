#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (a > b)
        cout << "a>b";
    else if (a == b)
        cout << "a=b";
    else
        cout << "a<b";
    return 0;
}