#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printResult(int arr[], int size)
{
    cout << "Values at Even Indicies\n";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
}

cout << "\n";
cout << "Values at Odd Indicies\n";
for (int i = 0; i < size; i++)
{
    if (arr[i] % 2 != 0)
    {
        cout << arr[i] << " ";
    }
}
cout << endl;
}

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    inputArray(arr, n);
    printResult(arr, n);
}