#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

int stackArr[MAX];
int top = -1;

// Push Operation
void push() {
    int value;
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push element.\n";
    } else {
        cout << "Enter value to push: ";
        cin >> value;
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack.\n";
    }
}

// Pop Operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop element.\n";
    } else {
        cout << stackArr[top] << " popped from stack.\n";
        top--;
    }
}

// Peek Operation
void peek() {
    if (top == -1) {
        cout << "Stack is empty. Nothing to peek.\n";
    } else {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}

// Display Operation
void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements are:\n";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << endl;
        }
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
