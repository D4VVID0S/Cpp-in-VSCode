#include <stdio.h>
#include <iostream>

using namespace std;

void sortujWyswietl(int *tab, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = i + 1; j < rozmiar; j++)
        {
            if(tab[j] < tab[i])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    for (int k = 0; k < rozmiar; k++)
    {
        cout << "Losowanie " << k + 1 <<": " << tab[k] << "." << endl;
    }
}

void lotto(int maxKulki, int doLosowania)
{
    if (maxKulki < doLosowania)
    {
        cout << "Pula kulek jest mniejsza od ilosci kulek do wylosowania, tak nie mozna!" << endl;
        return;
    }

    srand(time(NULL));

    int *kulki = new int[doLosowania];

    for(int i = 0; i < doLosowania; i++)
    {
        kulki[i] = rand() % maxKulki + 1;

        for(int j = 0; j < i + 1; j++)
        {
            if (kulki[i] == kulki[j] && i != j)
            {
                i--;
                break;

                //sprawdzenie czy poprzednia i nowa kulka są takie same
                //jeśli tak, to i-- by ponowić losowanie i cofnąć o jedno pętlę
                //break po to aby pętla dalej się nie wykonywała ponieważ nie jest potrzebne
                //jeśli nie, idzie dalej
            }          
        }
        
    }
    sortujWyswietl(kulki, doLosowania);
}

int main()
{
    /*
    srand(time(NULL));
    
    int liczba;
    liczba = rand() % 49 + 1;
    //rand() % 5 + 1 == Liczby są losowane w przedziale [1, 5]
    //rand() % 5 == Przedział [0, 5]
    */
    int maxKulek, maxDoWylosowania;

    cout << "Podaj pule kulek: ";
    cin >> maxKulek;
    cout << "Podaj ilosc kulek do losowania (nie moze byc wiekszy od puli kulek: ";
    cin >> maxDoWylosowania;

    lotto(maxKulek, maxDoWylosowania);

    return 0;
}