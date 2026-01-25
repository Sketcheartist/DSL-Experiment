//Bubble Sort
#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

void bubbleSort(std::vector<int>& list) {
    int n = list.size();
    
    // Outer loop to ensure we pass through the list multiple times
    for (int j = 0; j < n - 1; j++) {
        
        // We stop at n-j-1 because the last elements are already sorted
        for (int i = 0; i < n - 1 - j; i++) {
            
            // condition: if list[i] > list[i+1]
            if (list[i] > list[i + 1]) {
                // Your action: swap(list[i], list[i+1])
                std::swap(list[i], list[i + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(data);

    std::cout << "Sorted list: ";
    for (int val : data) {
        std::cout << val << " ";
    }
    return 0;
}
