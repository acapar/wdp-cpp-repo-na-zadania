#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma;
    cout<<"Podaj liczbę naturalną: ";
    cin>>n;

    for(int i=0; i<n; i++){
    suma+=i;
    }
    cout<<"Suma: "<<suma;
    return 0;
}
