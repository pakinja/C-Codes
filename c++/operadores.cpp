#include <iostream>
using namespace std;

int main()
{
    bool logico,logico2;
    int a=4,b=6,c=3,d=9;
    logico = (a!=b)&&(c!=d);
    logico2=(a!=b)||(c==d);

    cout<<logico;

    return 0;
}
