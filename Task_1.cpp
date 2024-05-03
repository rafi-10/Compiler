/*input your information and print out all of them*/

#include <iostream> //Header file jekano shob standard library include kora take
                    // jemon cout,cin ota
#include <string>   // niche string type use kora oise 8 no line a so er lagi age header file
                    // include kora lage tai okta leka osie
using namespace std;
int main()
{
    string name, university, id, section; // 4 ta string variable declare kora oise.
    cout << "Please enter your name: ";   // leka ta print kora oise cout diya
    getline(cin, name);                   // getline function diya name variable a input neya
                                          // oise cin er maddome.
    cout << "Please enter your University name: ";
    getline(cin, university);
    cout << "Please enter your student ID: ";  //uni, id, section er lagi o same kaj.
    getline(cin, id);
    cout << "Please enter your section: ";
    getline(cin, section);
    cout << "\n\n";                       // 2 ta new line print kora oise.
    cout << "Name: " << name << endl;     // name variable er modde ja input disil ta print
                                          // kora osie .....baki 3 ta o same.
    cout << "University: " << university << endl;
    cout << "ID: " << id << endl;
    cout << "Section: " << section << endl;
    return 0;
}
