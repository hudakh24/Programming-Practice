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

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int findMin(int arr[], int size) {
    int min = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;  
}

int findMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;  // Return the minimum element
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:" << endl;
    inputArray(arr, n);
    cout << "Before sort" << endl;
    cout << "Minimum number in an array is " << findMin(arr, n) << endl;
    cout << "Maximun number in an array is " << findMax(arr, n) << endl;
    selectionSort(arr, n);
    cout << "After sort" << endl;
    cout << "Minimum number in an array is " << findMin(arr, n) << endl;
    cout << "Maximun number in an array is " << findMax(arr, n) << endl;

}