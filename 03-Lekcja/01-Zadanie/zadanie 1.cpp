#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Podaj dwie liczby calkowite: ";
    cin>>a>>b;

    if(a>b)
    {
        cout<<"Wieksza liczba: "<<a<<endl;
        cout<<"Mniejsza liczba: "<<b<<endl;
        cout<<a<<">"<<b<<endl;
        cout<<b<<"<"<<a<<endl;
    }
    else
    {
        cout<<"Wieksza liczba: "<<b<<endl;
        cout<<"Mniejsza liczba: "<<a<<endl;
        cout<<a<<"<"<<b<<endl;
        cout<<b<<">"<<a<<endl;
    }
    return 0;
}
