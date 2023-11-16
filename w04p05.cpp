#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        cout << rand() % 49 +1 << " ";
    return 0;
}