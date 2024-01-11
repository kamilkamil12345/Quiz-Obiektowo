#include <iostream>
#include "pytanie.h"


using namespace std;

/* tworzymy dwa pliki klasy:

klasa.h     - zawiera atrybuty oraz nag³ówki funkcji/metod (spis treœci)
klasa.cpp   - zawiera cia³a funkcji/metod

*/
int main()
{
    int suma=0;
    pytanie p[5];

    for (int i=0; i<5; i++)
    {
        p[i].nr_pytania=i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma = suma + p[i].punkt;
    }

    cout << "Suma punktow: " << suma << endl;

    return 0;
}
