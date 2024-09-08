#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void twoSum(int arr[], int size, int target){
     bool pairFound = false;
    for (int i = 0; i < size; i++)
    { 
        for (int j = i + 1; j < size; j++)
        {   
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                pairFound = true;
            }
        }
    }
    if(!pairFound){
        cout << "Pair not found" << endl;
    }
}

int main() {
    int n, value;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    inputArray(arr, n);
    cout << "Enter the Target Value: " << endl;
    cin >> value;
    twoSum(arr, n, value);
}

