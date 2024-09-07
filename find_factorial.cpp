#include <iostream>
using namespace std;

void factorial(int num) {
    int factorial = 1;
    if (num < 0)
        cout << "Factorial of a negative number doesn't exist." << endl;
    else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }
}

int recursive_fact(int num) {
    if (num < 0) {
        return -1;
    }
    else if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * recursive_fact(num - 1); // Recursive case
    }
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    factorial(num);
    int returnValue = recursive_fact(num);
    if(returnValue!=-1)
    {
        cout << "Factorial of " << num << " = " << returnValue << endl;
    }
    else{
        cout << "Factorial of a negative number doesn't exist." << endl;
    }
}