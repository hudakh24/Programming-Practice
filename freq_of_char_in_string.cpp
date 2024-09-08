#include <iostream>
#include <string>
using namespace std;

void findCharFreq(string str) {
    int freq[256] = {0};  // Array to store the frequency of each character (ASCII range)

    // First loop: Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        char temp = str[i];  // Get current character
        freq[(int)temp]++;  // Increase the frequency of the character
    }

    // Second loop: Print frequency of each character
    for (int i = 0; i < str.length(); i++) {
        char temp = str[i];
        if (freq[(int)temp] != 0) {  // Only print if the character hasn't been printed yet
            cout << "Frequency of '" << temp << "' is: " << freq[(int)temp] << endl;
            freq[(int)temp] = 0;  // Set frequency to 0 to avoid printing again
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Input the entire string, including spaces

    findCharFreq(str);
}