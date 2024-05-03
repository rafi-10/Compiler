/*Input a string and find the length with space,without space and total space in the string*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_input;
    cout << "Enter a string: ";
    getline(cin, user_input);

    int length_with_spaces = user_input.length();

    int length_without_spaces = 0;
    int space_count = 0;

    for (char c : user_input) {
        if (c != ' ') {
            length_without_spaces++;
        } else {
            space_count++;
        }
    }

    cout << "\n\nLength with spaces: " << length_with_spaces << endl;
    cout << "Length without spaces: " << length_without_spaces << endl;
    cout << "Number of spaces: " << space_count << endl;

    return 0;
}
