#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

struct PERSONAJE
{
 int x,y;
 int vida;
 int tipo;

}
enemigo[10];

int VIDA(const PERSONAJE p)
{
    return p.vida;
}

void pintar(const PERSONAJE p)
{
    if(p.tipo==0)
        cout<<"*"<<endl;
    if(p.tipo==1)
        cout<<"#"<<endl;
    if(p.tipo==2)
        cout<<"@"<<endl;
}

void cam_vida(PERSONAJE &p)
{
    p.vida--;
}

int main()
{
    for (int i = 0; i<10; i++)
    {
        enemigo[i].vida = 3;
        enemigo[i].tipo = rand() %4;
    }
    cout <<"la vida del enemigo 0 es ";
    cout <<VIDA(enemigo[0]) << endl;
    for(int i=0; i<10;i++)
    {
      pintar(enemigo[i]);

    }
    cam_vida(enemigo[0]);
    cout <<"la vida del enemigo 0 es ";
    cout <<VIDA(enemigo[0]) << endl;

    return 0;
}
