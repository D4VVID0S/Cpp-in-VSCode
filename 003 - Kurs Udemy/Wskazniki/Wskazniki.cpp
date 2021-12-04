#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int zmienna1 = 10;
    int &refZmienna = zmienna1;
    int *wskZmienna = &zmienna1;
    int *wskZmienna2 = &refZmienna;

    cout << endl << "&refZmienna wyswietla jakis adres " << &refZmienna << endl;
    cout << "*wskZmienna wyswietla wartosc zawarta w zmiennej " << *wskZmienna << endl;
    cout << "*wskZmienna2 wskazuje na &refZmienna, wyswietla wartosc ktora znajduje sie pod danym adresem " << *wskZmienna2 << endl;

    return 0;
}