#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    char c;
    cout << "Podaj znak: ";
    cin >> c;

    switch (c) {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '%':
            cout<<a%b;
            break;
        default:
            cout<<"Podaj inny znak";
            break;
    }

    return 0;
}
