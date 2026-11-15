
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (b == 0)
    {
        cout << "Nie mozna dzielic przez zero.";
    }
    else if (a % b == 0)
    {
        cout << "Pierwsza liczba jest podzielna przez druga.";
    }
    else
    {
        cout << "Pierwsza liczba nie jest podzielna przez druga.";
    }

    return 0;
}

