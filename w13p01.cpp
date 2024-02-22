#include <iostream>

using namespace std;

struct liczby
{
    int x;
    int y;
};

int main()
{
    //-------ststycznie----------------
    liczby l1;
    l1.x = 10;
    l1.y = 20;
    cout << l1.x << " " << l1.y << endl;
    //-------dynamicznie --------------
    liczby *l2 = new liczby;
    l2->x = 101;
    l2->y = 202;
    cout << l2->x << " " << l2->y;
    return 0;
}