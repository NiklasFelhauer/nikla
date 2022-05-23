#include<iostream>
#include<string>
#include "Spielfigur.h"
#include <vector>

using namespace std;

int main()
{
    cout << "Hallo Spieler 1, bitte gebe deinen Namen ein: ";
    string Name;
    cin >> Name;
    int Lebenszahl = 3;
    Spielfigur player1(Name, Lebenszahl);
    cout << "Wir wuenschen viel Spass!" << endl;;
    system("pause");
    return 0;

}