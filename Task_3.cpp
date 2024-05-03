#include <iostream>
#include <cctype> // For character classification functions
using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int vowelCount = 0;
    int consonantCount = 0;
    int totalCharacterCount = 0;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (isupper(c)) {
            uppercaseCount++;
        } else if (islower(c)) {
            lowercaseCount++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(c)) {
            digitCount++;
        }
        totalCharacterCount++;
    }

    cout << "Uppercase letters: " << uppercaseCount << endl;
    cout << "Lowercase letters: " << lowercaseCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    cout << "Total characters: " << totalCharacterCount << endl;

    return 0;
}
