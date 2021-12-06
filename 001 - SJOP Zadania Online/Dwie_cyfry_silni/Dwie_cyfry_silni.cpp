#include <stdio.h>
#include <iostream>

using namespace std;

long long int Obl_silnia(int x, long long int wynik)
{
    for (int i = 1; i <= x; ++i)
    {
        wynik = wynik * i;
    }
    return wynik;
}

void Wysw_cyfr(long long int wynik)
{
    int dziesiatki = (wynik % 100) / 10;
    int jednostki = wynik % 10;
    
    cout << dziesiatki << " " << jednostki << endl;
}

int main()
{
    cout << "Program oblicza silnie podanej liczby i wyswietla cyfre jednosci i dziesiatek obliczonej silni" << endl;
    cout << "--------------------------------------------------" << endl;

    int liczba;
    long long int silnia = 1;

    cout << "Podaj liczbe z ktorej obliczyc silnie: ";
    cin >> liczba;

    silnia = Obl_silnia(liczba, silnia);    //wynik z obliczenia silni przypisany od razu do zmiennej silnia

    Wysw_cyfr(silnia);  //wyswietla cyfre dziesiatek i jednostek obliczonej silni

    return 0;
}