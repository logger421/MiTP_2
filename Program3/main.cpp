#include <iostream>
#include <cstring>
using namespace std;

class Pracownik {
public:
    int wprowadz(string, long, float);
    void inf_o_prac(void);
    bool zmien_pensje(float);
    long podaj_id(void);
private:
    string imie_nazwisko; // char zmieniony na string nie potrzeba teraz wskaznika ani rezerwowania za duzej ilosci pamieci
    long ident_prac;
    float zarobki;
};

int main(void) {
    Pracownik informatyk;
    if (informatyk.wprowadz("Adam Mickiewicz", 101101, 4000) == 0){
        cout << "Wartosci przypisane skladowym dla pracownika:" << endl;
        informatyk.inf_o_prac();
    }
    if (informatyk.zmien_pensje(5000.00)) {
        cout << "---------------- \nNowa pensja pracownika" << endl;
        informatyk.inf_o_prac();
    }
    else{
        cout << "Nieporawne zarobki!" << endl;
    }
    Pracownik SZEF;
    if(SZEF.wprowadz("Krzysztof Jarzyna",1000,10000) == 0){
        cout <<endl<<"Wartosci przypisane skladowym dla SZEFA:"<<endl;
        SZEF.inf_o_prac();
    }
    if (SZEF.zmien_pensje(13000.00)){
        cout << "--------------- \nNowa pensja szefa:"<<endl;
        SZEF.inf_o_prac();
    }
    else{
        cout<<"Niepoprawne zarobki!" << endl;
    }
}

int Pracownik::wprowadz(string nazwisko_prac, long id_prac, float zarobki_prac) {
    imie_nazwisko=nazwisko_prac;
    ident_prac = id_prac;
    zarobki = zarobki_prac;
    return(0);
}
void Pracownik::inf_o_prac(void) {
    cout << "Imie i nazwisko: " << imie_nazwisko << endl;
    cout << "Identyfikator: " << ident_prac << endl;
    cout << "Zarobki: " << zarobki <<" zl"<< endl;
}
bool Pracownik::zmien_pensje(float nowa_pensja) { // zmieniony typ na bool zajmuje mniej pamieci
    if (nowa_pensja < 15000) {
    zarobki = nowa_pensja; //przypisuje zarobka nowa wartosc
    return true;
    }
    else
    return false; // gdy cos pojdzie nie tak pojzdie do else w main i zwroci informacje niepoprawne zarobki
    }
long Pracownik::podaj_id(void) {
    return (ident_prac);
}
