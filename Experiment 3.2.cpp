//Binary Search
#include <iostream>
#include <vector>

using namespace std;

void binarySearch(int A[], int lower_bound, int upper_bound, int VAL) {
    
    int BEG = lower_bound;
    int END = upper_bound;
    int POS = -1;

    while (BEG <= END) {
        // Step 3: SET MID = (BEG + END) / 2
        int MID = (BEG + END) / 2;

        if (A[MID] == VAL) {
            POS = MID;
            cout << "Value found at position: " << POS << endl;
            return; // Go to step 6 (exit function)
        } 
        else if (A[MID] > VAL) {
            END = MID - 1;
        } 
        else {
            BEG = MID + 1;
        }
    } // [END OF LOOP]

    
    if (POS == -1) {
        cout << "VALUE IS NOT PRESENT IN THE ARRAY" << endl;
    }
}

int main() {
    // Array must be sorted for Binary Search to work
    int my_array[] = {10, 22, 35, 47, 50, 63, 75, 88, 99};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    
    int target;
    cout << "Enter the value to search for: ";
    cin >> target;

    // Call the function (lower_bound is 0, upper_bound is size-1)
    binarySearch(my_array, 0, size - 1, target);

    return 0;
}
