#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
    /*
    Nazwa tablicy jest wskaźnikiem.
    Tablica jest indeksowana od 0.
    */
    
    int a[3];
    a[0] = 0;
    a[1] = 10;
    a[2] = 20;
    int *wskZm = &a[0];

    cout << "a = " << a << endl;                //Wyswietla adres pierwszego elementu tablicy
    cout << "a[0] = " <<a[0] << endl;           //wyswietla wartosc pod danym indeksem (losowa liczba poniewaz nie jest jeszcze zainicjowana)
    cout << "&a[0] = " << &a[0] << endl;        //Wyswietla adres pierwszego elementu tablicy
    
    cout << "*&a[0] = " << *&a[0] << endl;      //wyswietla wartosc ktora znajduje sie pod adresem &a[0]
    cout << "*&a[1] = " << *&a[1] << endl;      //wyswietla wartosc ktora znajduje sie pod adresem &a[1]
    cout << "*&a[2] = " << *&a[2] << endl;      //wyswietla wartosc ktora znajduje sie pod adresem &a[2]

    cout << "*a = " << *a << endl;              //wyłuskuje wartosc z indeksu tablicy a
    cout << "*(a + 1) = " << *(a + 1) << endl;  //wyłuskuje wartosc z indeksu tablicy *(a + 1)
    cout << "*(a + 2) = " << *(a + 2) << endl;  //wyłuskuje wartosc z indeksu tablicy *(a + 2)

    cout << "*wskZm = " << *wskZm << endl;
    cout << "++*wskZm = " << ++*wskZm << endl;  //wyswietla wartosc a[0] + 1 = 0 + 1 = 1
    cout << "*++wskZm = " << *++wskZm << endl;  //wyswietla wartosc a[1] = 10
    cout << "*wskZm++ = " << *wskZm++ << endl;  //wyswietla wartosc a[1] = 10
    cout << "*wskZm = " << *wskZm << endl;      //wyswietla wartosc a[2] = 20
    
    return 0;
}