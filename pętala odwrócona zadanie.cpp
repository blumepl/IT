using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int main()
{
    	int wysokosc, szerokosc;
	cout << "Podaj szerokosc: ";
	cin >> szerokosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
    for (int i = wysokosc; i >= 1; --i) {
        for (int k = 0; k < szerokosc - i; ++k) {
            cout << "  ";
        }
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        for (int j = 0; j < i - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
