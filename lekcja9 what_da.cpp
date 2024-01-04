#include<iostream>
using namespace std;

int main()
{
    //deklaracja tablicy trójwymiarowej
    //taka tablica posiada 3*4*5 = 60 komórek
    int tab[3][4][5]; 
    //przypisanie wartości 23 do pierwszej komórki
    tab[0][0][0] = 23; 

    cout<<tab[0][0][0]<<endl;

    return 0;
}