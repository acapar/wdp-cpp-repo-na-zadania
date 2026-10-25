
#include <iostream>
using namespace std;

int main() {
    int sekundy;

    cin >> sekundy;

    cout << "Minuty: " << sekundy / 60 << endl;
    cout << "Pozostale sekundy: " << sekundy % 60 << endl;

    return 0;
}

