/*input or define some character and print the type and size */


#include <bits/stdc++.h> // Header file jekano shob standard library include kora take jemon cout,cin ota
using namespace std;     //we can use names for objects and variables from the standard library

int main()  // main function jetar type integer ....oww function er modde shob code leka oise
{
    int a = 1;  // integer type ae akta variable declare kora oise and value 1 deya oise.
    cout << "Name of type: "<<typeid(a).name();  // cout print korar lagi 1st a Name of type print oibo
    cout <<" Size of char: " << sizeof(a) <<" byte"<< endl;
    char b =2012020259;
    cout << "Name of type: "<<typeid(b).name();
    cout <<" Size of char: " << sizeof(b) <<" byte"<< endl;
    double c = 2.22222;
    cout << "Name of type: "<< typeid(c).name();
    cout <<" Size of char: " << sizeof(c) <<" byte"<< endl;

    return 0;
}
