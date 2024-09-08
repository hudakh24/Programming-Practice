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

void findModes(int arr[], int size) {
    int maxCount = 0;  
    int modes[size];   
    int modeIndex = 0;
 
    for (int i = 0; i < size; i++) { 
        int count = 1; 
        for (int j = 0; j < size; j++) { 
            if (i != j && arr[i] == arr[j]) 
            {
                count = count + 1; 
            }
        }
        
        if (count > maxCount) { 
            maxCount = count; 
           // modeIndex = 0;  
            modes[modeIndex++] = arr[i];   
        }
      
        else if (count == maxCount) { 
            bool alreadyExists = false;
            for (int k = 0; k < modeIndex; k++) { 
                if (modes[k] == arr[i]) { 
                    alreadyExists = true;  
                    break;
                }
            }
            if (!alreadyExists) {
                modes[modeIndex++] = arr[i];  
            }
        }
    }

    cout << "Mode(s) of the array: ";
    displayArray(modes, modeIndex);
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:" << endl;
    inputArray(arr, n);
    findModes(arr, n);
}