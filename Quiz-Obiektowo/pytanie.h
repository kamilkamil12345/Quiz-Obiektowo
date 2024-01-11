#include <iostream>

using namespace std;

class pytanie
{
public:
    string tresc;
    string a,b,c,d;
    int nr_pytania;
    string poprawna, odpowiedz;
    int punkt;

    void wczytaj();                 //wczytywanie pytania z pliku
    void zadaj();                   //pokazuje pytanie czyta odp
    void sprawdz();                 //sprawdza poprawnosc odp.

};
