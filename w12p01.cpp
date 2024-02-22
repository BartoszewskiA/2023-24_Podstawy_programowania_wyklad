#include <iostream>

using namespace std;
void a(int i);
int main()
{
    a(100);
    return 0;
}

void a(int i)
{
    cout << i << " ";
    if(i<=0)
        return;
    return a(--i);
}