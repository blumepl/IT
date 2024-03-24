#include <iostream>

using namespace std;

struct Uzytkownicy_DDT 
{
    string nick;
    string haslo;
    short lp;
    string status;
    string rodzaj_konta;
};

int main()
{
    Uzytkownicy_DDT PiotrSzawdynski =
    {
        "krowa",
        "10",
        1,
        "Aktywny",
        "10"
    };
    Uzytkownicy_DDT Pietrzuch =
    {
        "Koza",
        "10.6",
        24,
        "15",
    };
        Uzytkownicy_DDT dv =
    {
        "Pies",
        "13.4",
        25,
        "34",
    };
    Uzytkownicy_DDT je =
    {
        "swinia",
        "12.75",
        26,
        "8",
    };
    Uzytkownicy_DDT Piotrus_Pan;
    Piotrus_Pan.haslo = "2.8";
    Piotrus_Pan.nick = "kura";
    Piotrus_Pan.status = "4";
   
    cout << "Oto lista rzwiezat"
    << endl << "nazwa " << PiotrSzawdynski.nick
    << endl << "waga(gram) " << PiotrSzawdynski.haslo
    << endl << "wiek(tygodnie)" << PiotrSzawdynski.lp
    << endl
	<< endl << "nazwa " << Pietrzuch.nick
    << endl << "waga(gram) " << Pietrzuch.haslo
    << endl << "wiek(tygodnie)" << Pietrzuch.lp
    << endl
    << endl << "nazwa " << Piotrus_Pan.nick
    << endl << "waga(gram) " << Piotrus_Pan.haslo
    << endl << "wiek(tygodnie) " << Piotrus_Pan.status
   	<< endl << "nazwa " << dv.nick
    << endl << "waga(gram) " << dv.haslo
    << endl << "wiek(tygodnie)" << dv.lp
    << endl
   	<< endl << "nazwa " << je.nick
    << endl << "waga(gram) " << je.haslo
    << endl << "wiek(tygodnie)" << je.lp;
    
    cin.get();
    return( 0 );
}
