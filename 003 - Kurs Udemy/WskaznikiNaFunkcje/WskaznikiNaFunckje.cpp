#include <stdio.h>
#include <iostream>

using namespace std;

int nazwaFunkcji()
{

}

int main()
{
    int (*wskNaFunkcje)();

    wskNaFunkcje = &nazwaFunkcji;   //Celuje na adres funkcji
    
    cout << wskNaFunkcje << endl;

    return 0;
}