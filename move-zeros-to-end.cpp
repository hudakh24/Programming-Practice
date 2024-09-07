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
void moveZerosToEnd(int arr[], int size)
{
    int index = 0;

    //Move non-zero elements to the start of the array
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    //rest array = 0
    for (int i = index; i < size; i++) {
    arr[i] = 0;
}


}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:" << endl;
    inputArray(arr, n);
    cout << "Array after moving zeros to the end: " << endl;
    moveZerosToEnd(arr, n);
    displayArray(arr, n);

}