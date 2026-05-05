#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

class DLL {
    Node* head = NULL;

public:
    void insertBeg(int x) {
        Node* n = new Node{x, NULL, head};
        if (head) head->prev = n;
        head = n;
    }

    void insertEnd(int x) {
        Node* n = new Node{x, NULL, NULL};
        if (!head) { head = n; return; }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
        n->prev = t;
    }

    void del(int x) {
        Node* t = head;
        while (t && t->data != x) t = t->next;
        if (!t) { cout << "Not found\n"; return; }

        if (t->prev) t->prev->next = t->next;
        else head = t->next;

        if (t->next) t->next->prev = t->prev;
        delete t;
    }

    void display() {
        Node* t = head;
        while (t) {
            cout << t->data << " <-> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DLL l;
    int ch, x;

    do {
        cout << "\n1.InsertBeg 2.InsertEnd 3.Delete 4.Display 5.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: cin >> x; l.insertBeg(x); break;
            case 2: cin >> x; l.insertEnd(x); break;
            case 3: cin >> x; l.del(x); break;
            case 4: l.display(); break;
        }
    } while (ch != 5);
}
