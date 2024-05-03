/*input a string and find a character how much time appears in this string*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_input;
    char char_to_find;

    cout << "Enter a string: ";
    getline(cin, user_input);

    cout << "Enter a character: ";
    cin >> char_to_find;

    int char_count = 0;
    for (char c : user_input) {
        if (c == char_to_find) {
            char_count++;
        }
    }

    cout << "The character " << char_to_find << " appears " << char_count << " times in the string." << endl;

    return 0;
}
