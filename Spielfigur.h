#ifndef HEADER_Spielfigur
#define HEADER_Spielfigur
#include <string>
#include<iostream>
#pragma once

using namespace std;

class Spielfigur
{
private:
    string m_PlayerName;
    int Leben;
public:
    Spielfigur();
    Spielfigur(string PlayerName, int Leben);
    ~Spielfigur();
protected:;
};

#endif