#include <iostream>
#include <cstring>
using namespace std;

class Psy
{
private: // składowa prywatna zabezpiecza przed niekontrolowana zmiana danych
    string rasa;
    int srednia_waga;
    int srednia_wysokosc;
public:
    Psy(string r,int wg,int wys){ //konstrukor
    rasa=r;
    srednia_waga=wg;
    srednia_wysokosc=wys;
    }
    void inf_o_psie(void); //metody in out
    void dodaj_psa();
};
int main(void)
{
    Psy p1("Dalmatynczyk",58,24);
    Psy p2("Owczarek szetlandzki",22,15);
    Psy p3("Owczarek niemiecki",30,20);
    Psy p4("Nic",1,1); //inicjalizujemy go zmiennymi unikamy dzieki temu problemow moze nie tutaj ale np w programach
    p1.inf_o_psie();    //do liczenia moglibysmy przypadkiem podzielic przez 0
    p2.inf_o_psie();
    p3.dodaj_psa();
    p3.inf_o_psie();
    p4.dodaj_psa();
}
void Psy::inf_o_psie(void) // 
{
    cout<<endl<<"Rasa: "<<rasa<<endl;
    cout<<"Srednia waga: "<<srednia_waga<<" kg"<<endl;
    cout<<"Srednia wysokosc: "<<srednia_wysokosc<<" cm"<<endl;
}
void Psy::dodaj_psa(){
    cout<<endl<<"DODAWANIE NOWEGO PSA DO BAZY: "<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Podaj rase: ";
    getline(cin,rasa); // getline umozliwia wpisywanie dwuczlonowych ras psow bez wysypywania sie programu
    cout<<"Podaj srednia wage: ";
    cin >> srednia_waga;
    cout<<"Podaj srednia wysokosc: ";
    cin>> srednia_wysokosc;
}
