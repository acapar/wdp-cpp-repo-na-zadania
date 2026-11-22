
#include <iostream>
using namespace std;

int main() {
    int liczba;
    int suma = 0;
    int licznik = 0;
    int najwieksza, najmniejsza;
    double srednia;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    najwieksza = liczba;
    najmniejsza = liczba;

    while (liczba != 0) {
        suma = suma + liczba;
        licznik++;

        if (liczba > najwieksza) {
            najwieksza = liczba;
        }

        if (liczba < najmniejsza) {
            najmniejsza = liczba;
        }

        cout << "Podaj liczbe: ";
        cin >> liczba;
    }

    srednia = (double)suma / licznik;

    cout << "Najwieksza: " << najwieksza << endl;
    cout << "Najmniejsza: " << najmniejsza << endl;
    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;

    return 0;
}

