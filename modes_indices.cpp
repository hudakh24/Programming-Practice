#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void find_Freq_Indicies(int arr[], int size) {
    bool checked[size] = {false};  // To keep track of checked elements

    for (int i = 0; i < size; i++) { 
        if (!checked[i]) {
            int count = 1;
            int currentNumber = arr[i];
      
        // To store indices of the current number
            cout << "Number " << currentNumber << " appears at indices: " << i << " ";
            for (int j = i + 1; j < size; j++)
            {
                if (currentNumber == arr[j]) {
                    count = count + 1;
                    cout << j << " ";
                    checked[j] = true; // Mark this index as processed
                }
            }
            cout << "and its frequency is: " << count << endl;
            checked[i] = true; //mark index as processed
        }
    }
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array:" << endl;
    inputArray(arr, n);
    find_Freq_Indicies(arr, n);
}
