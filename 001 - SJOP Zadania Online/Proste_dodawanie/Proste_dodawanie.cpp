#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, suma = 0;
    int *wsk;
    wsk = new int[n];

    cout << "Podaj ilosc liczb ktore chcesz zsumowac: ";
    cin >> n;

    cout << "Podaj liczby do zsumowania: ";

    for(int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cin >> wsk[i];
            suma = suma + i;
        }
        else if(i != n)
        {
            cout << "Podaj kolejna liczbe: ";
            cin >> wsk[i];
            suma = suma + i;
        }
        else
        {
            cout << "Podaj ostatnia liczbe: ";
            cin >> wsk[i];
            suma = suma + wsk[i];
        }
        
    }
    cout << "Suma podanych liczb wynosi: " << suma << "." << endl;

    return 0;
}