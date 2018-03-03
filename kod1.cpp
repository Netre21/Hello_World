#include "dodaw.h"
#include<iostream>
using namespace std;
int main()
{
cout<<"WITAJ W SWIECIE WOJNY";
Statystyki Paladyn;
Paladyn.pocz();
for(int i=0;i<8;i++)
    {
    Paladyn.czytaj();
    }
for(int i=0;i<5;i++)
    {
    Paladyn.trenuj();
    }
for(int i=0;i<10;i++)
    {
    Paladyn.studiuj();
    }
for(int i=0;i<12;i++)
    {
    Paladyn.bron();
    }
Paladyn.podglad();
}
