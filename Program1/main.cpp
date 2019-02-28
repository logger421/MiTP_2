#include <iostream>
#include <cstring>
using namespace std;

class Pracownik{
private:
    string imie_nazwisko; // Podzial na private i public ulatwia kontrole nad danymi i zabezpiecza przed pomylkami
    long ident_prac;
    float pensja;
public:
    Pracownik(string i,long id,float p){ //konstruktor zeby program sie nie wysypal nawet jak wpiszemy czasem zle dane
        imie_nazwisko=i; // uzyskujemy dzieki temu dostem do skladowych private
        ident_prac=id;
        pensja=p;
    }
    void dodaj_prac(void);//dwie metody
    void inf_o_prac(void);
};
int main(void)
{
    Pracownik kierownik("Jan Kowalski",101,10000);// Tworzymy obiekt nadajemy mu nazwe i inicjalizujemy skladowe
    Pracownik sekretarka("Balbina Wykrot",102349,3000);
    Pracownik sprzataczka("Krystyna Bajkov ",101001,2100);
    kierownik.inf_o_prac();
    sekretarka.inf_o_prac();
    sprzataczka.inf_o_prac();
    Pracownik n("NEW",1,1);
    n.dodaj_prac();
    n.inf_o_prac();
}

void Pracownik::dodaj_prac(void){ //Dodawanie nowego pracownika najprostszy schemat
    cout <<endl << "Dodawanie nowego pracownika: "<< endl <<" -----------------------------------------"<<endl;
    cout << "Podaj imie i nazwisko pracownika: ";
    getline(cin,imie_nazwisko); // getline zeby zapobiec wywalaniu programu gdy podamy Imie i oddzielimy spacja
    cout << "Podaj ID pracownika: ";
    cin >>ident_prac;
    cout << "Podaj zarobki pracownika: ";
    cin >> pensja;

}
void Pracownik::inf_o_prac(void){
    cout << endl << "Imie i nazwisko: "<< imie_nazwisko <<endl;
    cout<< "Identyfikator: "<< ident_prac <<endl;
    cout<< "Pensja: "<< pensja <<" zl" <<endl;
}
