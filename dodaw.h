#include<iostream>
using namespace std;
dod(int a, int b)
{
cout<<"jest";
return(a+b);
}
class Statystyki
    {
    int w=0;
    int s=0;
    int mm=0;
    int o=0;
public:
    void pocz()
        {
        cout<<"Hello World \n";
        }
    void czytaj()
        {
        w=w+1;
        }
    void trenuj()
        {
        s=s+1;
        }
    void studiuj()
        {
        mm=mm+1;
        }
    void bron()
        {
        o=o+1;
        }
    void podglad()
        {
        cout<<"wiedza="<<w<<endl<<"sila="<<s<<endl<<"Moc magiczna="<<mm<<endl<<"Obrona="<<o;
        }
    };
