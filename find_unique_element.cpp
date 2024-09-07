#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void uniqueElement(int arr[], int size) {
    bool isEmpty = true;

    //  if there's only one element in array
    if (size == 1) {
        cout << arr[0] << " ";
        isEmpty = false;
    } else {
        for (int i = 0; i < size; i++) {
            bool isUnique = true;
            for (int j = 0; j < size; j++) {
                if (i != j && arr[i] == arr[j]) {
                    isUnique = false;
                    break;
                }
            }

            if (isUnique) {
                cout << arr[i] << " ";
                isEmpty = false;
            }
        }
    }

    if (isEmpty) {
        cout << "No unique value";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of array:" << endl;
    inputArray(arr, n);
    cout << "Unique element/elements in the array are: ";
    uniqueElement(arr, n);

    return 0;
}