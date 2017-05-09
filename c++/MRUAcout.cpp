#include <iostream>
using namespace std;

int main()
{
    float xo,vo,t,a;
    cout<<"xo,vo,t,a"<< endl;
    cin>>xo>>vo>>t>>a;
    cout<<"posicion final =  "<<xo+vo*t+((0.5)*a*t*t);

    return 0;
}
