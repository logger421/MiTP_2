#include <iostream>
#include <cstring>
using namespace std;
//Konstruktor klasy
class Pracownik {
public:
    Pracownik(const char *, long, float);
    void inf_o_prac(void);
    int zmien_pensje(float);
    long podaj_id(void);
private:
    char imie_nazwisko[64];
    long ident_pracownika;
    float zarobki;
};

int main(void) {
    Pracownik informatyk("Jan Kowalski", 101101, 4000.0);
    informatyk.inf_o_prac();
    Pracownik konserwator("Andrzej Andrzejewski",100200,2000);
    konserwator.inf_o_prac();
}

Pracownik::Pracownik(const char* imie_nazwisko, long ident_prac, float zarobki) {
    strcpy (Pracownik::imie_nazwisko, imie_nazwisko); // wprowadza nadane imie i nazwisko do tablicy
    Pracownik::ident_pracownika = ident_prac;
    if (zarobki < 15000){
        Pracownik::zarobki = zarobki;
    }
    else{
        Pracownik::zarobki = 0.0; // chyba zabezpiecza przed przeciazeniem float
    }
}
void Pracownik::inf_o_prac(void) { // deklaracja metody wyjscia
cout << endl << "Imie i nazwisko: " << imie_nazwisko << endl;
cout << "NUMER ID: " << ident_pracownika << endl;
cout << "Zarobki: " << zarobki <<" zl" << endl;
}

