#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko, temp;
    int Id;
    cout << "Id: ";
    getline(cin, temp);
    Id = atoi(temp.c_str());
    cout << "Imie: ";
    getline(cin, imie);
    cout<<"Nazwisko: ";
    getline(cin, nazwisko);

    cout << Id<<endl;
    cout << imie << endl;
    cout << nazwisko << endl;
    return 0;
}