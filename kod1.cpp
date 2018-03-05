#include "dodawanie.h"
#include <iostream>

using namespace std;

int main()
{
staty rycerz;
cout<<"WITAJ W SWIECIE WOJNY LUDZI";
rycerz.pocz();
while(1)
    {
    int i1,i2,i3,i4;
    cin>>i1>>i2>>i3>>i4;
    for(int i=0;i<i1;i++)
        {
        rycerz.czytaj();
        }
    for(int i=0;i<i2;i++)
        {
        rycerz.trenuj();
        }
    for(int i=0;i<i3;i++)
        {
        rycerz.studiuj();
        }
    for(int i=0;i<i4;i++)
        {
        rycerz.bron();
        }
    rycerz.podglad();
    cout<<endl;
    }
}
