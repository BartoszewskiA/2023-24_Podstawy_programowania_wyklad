#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ile liczb wczytac: ";
    cin >> n;
    int tab[100];

    for(int i=0; i< n; i++)
        {
            cout<<"tab["<<i<<"]=";
            cin>>tab[i];
        }
    
    for(int i=n-1; i>=0; i--)
        cout<<tab[i]<<" ";
    return 0;
}