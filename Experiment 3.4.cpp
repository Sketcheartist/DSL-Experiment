//Insertion Sort
#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {7, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial Array: ";
    printArray(arr, n);
    cout << endl;

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "Pass " << i << ":" << endl;
        cout << "Key = " << key << endl;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            cout << "  Since " << arr[j] << " > " << key
                 << ", shift " << arr[j] << " to the right" << endl;

            arr[j + 1] = arr[j];
            j--;

            cout << "  Array now: ";
            printArray(arr, n);
        }

        // Insert key
        arr[j + 1] = key;
        cout << "Insert key at position " << j + 1 << endl;

        cout << "Array after Pass " << i << ": ";
        printArray(arr, n);
        cout << "------------------------" << endl;
    }

    cout << "\nFinal Sorted Array: ";
    printArray(arr, n);

    return 0;
}
