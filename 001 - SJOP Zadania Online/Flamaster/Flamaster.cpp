#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string slowo;
    int iloscZnakow = 1;

    cout << "Podaj slowo: ";
    cin >> slowo;

    if (slowo.length() == 0 || slowo.length() > 50)
    {
        cout << "Podane slowo jest niepoprawne. Slowo powinno miescic sie pomiedzy 1 a 50 znakami." << endl;
        cout << "Program zostanie ponownie uruchomiony." << endl;

        return 0;
    }

    cout << slowo[2] << endl;

    for (int i = 0; i < slowo.length(); ++i)
    {
        if(slowo[i] == slowo[i + 1])
        {
            iloscZnakow ++;
        }
        else if(iloscZnakow != 1)
        {
            cout << slowo[i] << iloscZnakow;
            iloscZnakow = 1;
        }
        else
        {
            cout << slowo[i];
        }
    }

    return 0;
}