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

int main() {
    int n1;
    
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array:" << endl;
    inputArray(arr1, n1);
    reverseArray(arr1, n1);
    displayArray(arr1, n1);
}