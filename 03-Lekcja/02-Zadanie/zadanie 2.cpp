#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char znak;
    cout<<"Podaj dwie liczby calkowite: ";
    cin>>a>>b;
    cout<<"Podaj znak: ";
    cin>>znak;

    if(znak=='+'){
        cout<<"Wynik: "<<a+b;
    }
    else if(znak=='-'){
        cout<<"Wynik: "<<a-b;
    }
    else if(znak=='*'){
        cout<<"Wynik: "<<a*b;
    }
    else if(znak=='/'){
            if(b!=0){
             cout<<"Wynik: "<<a/b;
            }
            else{
                cout<<"Nie dziel przez 0!";
            }
    }
    else if(znak=='%'){
            if(b!=0){
                cout<<"Wynik: "<<a%b;
            }
            else{
                cout<<"Nie dziel przez 0!";
            }
    }
    return 0;
}
