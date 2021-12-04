#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    //dynamiczne alokowanie pamieci w tablicach

    int n = 0;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    int *wsk = new int[n]; //new int tworzy zmienna ktora bedzie nam alokowac pamiec w pozniejszym momencie, nie na start programu

    for(int i = 0; i < n; i++)
        cout << wsk[i] << endl;

    delete [] wsk;
    wsk = NULL;     //po uzyciu delete ustawiamy wskaznik na NULL by nie wskazywal na zaden inny adres

    if (wsk != NULL)
        cout << "wsk = " << wsk << endl;
    else
        cout << "wsk = NULL" << endl;

    return 0;
}