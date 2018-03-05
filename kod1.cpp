#include "dodaw.h"
#include<iostream>
using namespace std;
int main()
{
cout<<"WITAJ W SWIECIE WOJNY LUDZI";
Statystyki Paladyn;
Paladyn.pocz();
while(1)
    {
    int i1,i2,i3,i4;
    cin>>i1>>i2>>i3>>i4;
    for(int i=0;i<i1;i++)
        {
        Paladyn.czytaj();
        }
    for(int i=0;i<i2;i++)
        {
        Paladyn.trenuj();
        }
    for(int i=0;i<i3;i++)
        {
        Paladyn.studiuj();
        }
    for(int i=0;i<i4;i++)
        {
        Paladyn.bron();
        }
    Paladyn.podglad();
    cout<<endl;
    }
}
