#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LL {
public:
    Node* head;
    LL() { head = NULL; }

    void push_front(int val) {
        Node* newN = new Node(val);
        newN->next = head;
        head = newN;
    }

    void push_back(int val) {
        Node* newN = new Node(val);
        if (head == NULL) {
            head = newN;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newN;
    }

    void pop_front() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid pos" << endl;
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid pos" << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Invalid pos" << endl;
            return;
        }
        Node* newN = new Node(val);
        newN->next = temp->next;
        temp->next = newN;
    }

    void deleteAt(int pos) {
        if (pos < 0 || head == NULL) {
            cout << "Invalid pos" << endl;
            return;
        }
        if (pos == 0) {
            pop_front();
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid pos" << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid pos" << endl;
            return;
        }
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LL ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(5);
    ll.print();          // 1 -> 2 -> 3 -> 5 -> NULL

    ll.insert(4, 1);     // index 1 par 4 insert
    ll.print();          // 1 -> 4 -> 2 -> 3 -> 5 -> NULL

    ll.deleteAt(1);      // index 1 wala node delete
    ll.print();          // 1 -> 2 -> 3 -> 5 -> NULL

    ll.deleteAt(10);     // Invalid pos
    ll.print();

    return 0;
}