#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <iomanip>
// #include <unistd.h> para linux

using namespace std;

int main()
{
    int h, mins, seg, x;

    x=1000;

    for(h=0; h<24; h++)
    {
        for (mins=0; mins <60; mins++)
        {
            for(seg=0;seg<60;seg++)
            {
                cout <<  h%02  << ":" << mins <<":"
                << seg << endl;
                Sleep(x);
                system("cls");

            }
        }
    cout << endl;
    }
}
