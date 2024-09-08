#include <iostream>
#include <string>
using namespace std;

void findCharFreq(string str){
    int size = str.length();
    for (int i; i < size; i++)
    {
        int count = 1;
        char temp;
        temp = str[i];
        if(temp==str[i+1]){
            count = count + 1;
        }
        cout << "frequency of " << str[i] << " is: " << count << endl;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // This will capture the entire line, including spaces
    cout << "You entered: " << str << endl;
    findCharFreq(str);
}