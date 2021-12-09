#include <stdio.h>
#include <iostream>

using namespace std;

int odwracanie(int liczba, int odwLiczba)
{
    odwLiczba = 0;

    while (liczba != 0)
    {
        int tmp = liczba % 10;
        odwLiczba = odwLiczba * 10 + tmp;
        liczba = liczba / 10;
    }
    return odwLiczba;
}

int main()
{
    int liczba, odwLiczba = 0;

    bool wynik = 0;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    while(wynik != 1)
    {
        odwLiczba = odwracanie(liczba, odwLiczba);
        
        if (liczba != odwLiczba)
        {
        liczba = liczba + odwLiczba;
        cout << endl << liczba << endl;
        }
        else
            wynik = 1;
    }

    cout << "Liczba " << odwLiczba << " jest palindromem." << endl;

    return 0;
}