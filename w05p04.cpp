#include <iostream>

using namespace std;

double srednia(double l1, double l2);
double srednia(int l1, int l2);
double srednia(int l1, int l2, int l3);
double srednia(int l1, int l2, int l3, int l4);

int main()
{
    cout << srednia(4, 6);
    return 0;
}

double srednia(double l1, double l2)
{
    cout << "srednia 2 rzeczywistych" << endl;
    return (l1 + l2) / 2;
}

// int srednia(int l1, int l2) - błedne
// {
//     cout << "srednia 2 calkowitych" << endl;
//     return (l1 + l2) / 2;
// }

double srednia(int l1, int l2)
{
    cout << "srednia 2 calkowitych" << endl;
    return (l1 + l2) / 2.0;
}
double srednia(int l1, int l2, int l3)
{

    cout << "srednia 3 calkowitych" << endl;
    return (l1 + l2 + l3) / 3.0;
}
double srednia(int l1, int l2, int l3, int l4)
{
    cout << "srednia 4 calkowitych" << endl;
    return (l1 + l2 + l3 + l4) / 4.0;
}