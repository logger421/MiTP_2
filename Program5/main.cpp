#include <iostream>
#include <cstring>
using namespace std;
//Destruktor

class pracownik {
public:
    pracownik(const char *, long, float);
    ~pracownik(void); //wstepna deklaracja destruktora
    void inf_o_prac(void);
    int zmien_pensje(float);
    long podaj_id(void);
private:
    char imie_nazwisko[64];
    long ident_pracownika;
    float zarobki;
};

int main(void) {
    pracownik informatyk("Jan Kowalski", 101101, 4000.0);
    informatyk.inf_o_prac();
    pracownik sekretarka("Anna Maria Wesolowska",123001,3500.0);
    sekretarka.inf_o_prac();
    pracownik sprzatacz("Pan Zbyszek", 300301, 1500);
    sprzatacz.inf_o_prac();
}
pracownik::pracownik(const char* imie_nazwisko, long ident_prac, float zarobki) {
    strcpy (pracownik::imie_nazwisko, imie_nazwisko);
pracownik::ident_pracownika = ident_prac;
    if (zarobki < 15000){
        pracownik::zarobki = zarobki;
    }
    else{
        pracownik::zarobki = 0.0;
    }
}
pracownik::~pracownik(void) { // deestruktor zwalnia pamiec zarezerwowana dla obiektow po zakonczeniu dzialania
    cout <<endl<< "Obiekt o nazwie: " << imie_nazwisko <<" zostal pomyslnie usuniety"<< endl;
}
void pracownik::inf_o_prac(void) {
    cout <<endl<< "Imie i nazwisko: " << imie_nazwisko << endl;
    cout << "Identyfikator: " << ident_pracownika << endl;
    cout << "Zarobki: " << zarobki <<" zl" << endl;
}
