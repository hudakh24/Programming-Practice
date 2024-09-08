#include <iostream>
using namespace std;

int foo(int value)
{
    switch (value) {
        case 101:
            return 100;
        case 100:
            return 101;
        default: 
            cout << "Wrong Number" << endl;  // Optional: indicates invalid input
            return 0; 
    }
}

int main() {
    cout << "Enter the Value: ";
    int value;
    cin >> value;

    foo(value);
}