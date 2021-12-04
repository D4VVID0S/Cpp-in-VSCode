#include <stdio.h>
#include <iostream>

using namespace std;

bool czy_pierwsza(int *x, int n, int i)
{
    if (x[i] < 2)
        {
            return false; //liczba nie jest pierwsza
        }
        for (int j = 2; j*j <= x[i]; j++)
        {
            if(x[i] % j == 0)
                    return false; //liczba nie jest pierwsza
        }
        return true; //liczba jest pierwsza
}

int main()
{
    cout << "Program sprawdza ktore z podanych liczb sa liczbami pierwszymi w przedziale [1, 100000]" << endl;
    cout << "--------------------------------------------------" << endl;

    int n; //ilosc sprawdzanych liczb
    
    cout << "Podaj ile liczb chcesz sprawdzic: ";
    cin >> n;

    int tab[n]; //tablica rozmiaru ilosci sprawdzanych liczb

    for (int i = 0; i < n; i++) //Zapisywanie liczb do tablicy o rozmiare n
    {
        if (i == 0)
            cout << "Podaj liczbe: ";
        else
            cout << "Podaj kolejna liczbe: ";
        cin >> tab[i];
    }
    
    for (int i = 0; i < n; ++i) //Sprawdzanie kazdej liczby z tabliczy czy jest perwsza
    {
        if (czy_pierwsza(tab, n, i))
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;            
    }
    return 0;
}