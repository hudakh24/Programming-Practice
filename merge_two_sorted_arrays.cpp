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

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
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

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0;

    for (int j = 0; j < n1; j++) {
        mergedArr[i++] = arr1[j];
    }

    for (int j = 0; j < n2; j++) {
        mergedArr[i++] = arr2[j];
    }
}

int main() {
    int n1, n2;
    
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array:" << endl;
    inputArray(arr1, n1);

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array:" << endl;
    inputArray(arr2, n2);

    // Sort the arrays
    selectionSort(arr1, n1);
    selectionSort(arr2, n2);

    // Display the sorted arrays
    cout << "Sorted arrays" << endl;
    cout << "Array 1 = ";
    displayArray(arr1, n1);

    cout << "Array 2 = ";
    displayArray(arr2, n2);
   
    int n3 = n1 + n2;
    int mergedArr[n3];

    mergeArrays(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged array: ";
    selectionSort(mergedArr, n3);
    displayArray(mergedArr, n3);
}