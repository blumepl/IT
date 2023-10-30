	#include <iostream>
	using namespace std;
	
	int main (){
		
		// ciąg znakow (tekst) - string
		// liczba całkowita - short, int, long, unsignet short
		short a, b;
		cout << "Podaj a: ";
		cin >> a;
		cout << "Podaj b: ";
		cin >> b;
		
		// instukcja warunkow - if(warunek)
		if(a > b){
			cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
	}
	// = operator przypisania
	// == operator porownania
	// != rozne od (a != b ) -> czy 4 jest rozne od 5 (tak)
	else if(a==b){ //sprawdzenie kolejnego warumku
		cout << "a==b";
	}	
		else { // jezeli zaden z powyszych warunkow sie nie spelni to wykonaj else(w przeciwnym razie)
			cout << a << "<" << b;
		}
		
	}