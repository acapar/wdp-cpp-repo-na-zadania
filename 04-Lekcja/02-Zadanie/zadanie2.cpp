
#include <iostream>
using namespace std;

int main() {
    int n;
    double liczba;
    double suma = 0;
    double srednia;

    cout << "Podaj n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        suma = suma + liczba;
    }

    srednia = suma / n;

    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;

    return 0;
}

