#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, potega;

    cout << "Podaj liczbe do spotegowania:";
    cin >> a;
    cout << "Podaj wspolczynnik potegi:";
    cin >> b;

    potega = a;

    for (int i = 2; i <= b; ++i) //dlatego, że a^1 = a, zatem zaczynamy od a^2
    {
        potega = potega * a;
    }

    cout << "a do potegi b = " << potega << "." << endl;

    return 0;
}