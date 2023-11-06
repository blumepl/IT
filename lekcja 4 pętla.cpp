	#include <iostream>
	using namespace std;
	
	int main(){
	 /*Inkremantacja
	 i = i + 1
	 i += 1
	 i++
		Dekrementacja
		 i = i - 1
		 i -= 1
		 i--
		*/
	// for(wartosc Poczatkowa; warunek Konczacy; krok)
	for(int i = 0; i < 5; i++){// i - zmienna lokalna, istnieje tylko w petli
		cout << "Iteracja nr: " << i << endl;
}
	int wysokosc, szerekosc;
	cout << "Podaj szerokosc: ";
	cin >> szerekosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;

	for(int i = 0; i < wysokosc; i++){
		for(int j = 0; j <szerekosc; j++){
			cout << " " << i << j;
		}
		cout << endl;
	}
	









	cout << endl;
	system("pause");
   
				}