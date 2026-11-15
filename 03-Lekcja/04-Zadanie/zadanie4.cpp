
#include <iostream>
using namespace std;

int main()
{
    int ocena1, ocena2, ocena3, ocena4, ocena5;
    int niedostateczne = 0;
    float srednia;

    cout << "Podaj pierwsza ocene: ";
    cin >> ocena1;

    cout << "Podaj druga ocene: ";
    cin >> ocena2;

    cout << "Podaj trzecia ocene: ";
    cin >> ocena3;

    cout << "Podaj czwarta ocene: ";
    cin >> ocena4;

    cout << "Podaj piata ocene: ";
    cin >> ocena5;

    srednia = (ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5.0;

    if (ocena1 == 1)
        niedostateczne++;

    if (ocena2 == 1)
        niedostateczne++;

    if (ocena3 == 1)
        niedostateczne++;

    if (ocena4 == 1)
        niedostateczne++;

    if (ocena5 == 1)
        niedostateczne++;

    cout << "Srednia ocen: " << srednia << endl;
    cout << "Liczba ocen niedostatecznych: " << niedostateczne;

    return 0;
}
