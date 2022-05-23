#include "Spielfigur.h"
#include<string>
#include<iostream>

using namespace std;

Spielfigur::Spielfigur() {

}

Spielfigur::Spielfigur(string PlayerName, int Leben) : m_PlayerName(PlayerName), Leben(Leben)
{
	m_PlayerName = PlayerName;
	cout << "Name erkannt: " << PlayerName << endl;
	Leben = Leben;
	cout << "Leben: " << Leben << endl;
}

Spielfigur::~Spielfigur() {               // Destruktor (Speicher wieder freigeben)

}