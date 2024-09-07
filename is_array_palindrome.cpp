#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
   
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    for (start; start < end; start++, end--)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void Palindrome(int arr[], int temp[], int size){
    bool status = true;

    for (int i = 0; i < size; i++)
    {
        if (arr [i]!= temp[i])
        {
            status = false;
        cout << "Array is a not Palindrome\n";
        break;
        }
    }

    if(status)
        {
            cout << "Array is a Palindrome\n";
        }
}

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int temp[n];
    cout << "Enter the elements of the array:" << endl;
    inputArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
    reverseArray(temp, n);
    displayArray(temp, n);
    Palindrome(arr, temp, n);
}
