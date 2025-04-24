#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    void insertAtPosition(int value, int pos) {
        if (pos <= 0) return;
        Node* newNode = new Node(value);
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++){
            temp = temp->next;
        }
        if (temp == nullptr) return;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFromBeginning() {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd() {
        if (head == nullptr) return;
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteFromPosition(int pos) {
        if (head == nullptr || pos <= 0) return;
        if (pos == 1) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next; i++){
            temp = temp->next;
        }
        if (temp->next == nullptr) return;
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Initial Linked List: ";
    list.display();

    int choice, value, pos;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1) Insert at Beginning" << endl;
        cout << "2) Insert at End" << endl;
        cout << "3) Insert at Given Position" << endl;
        cout << "4) Delete from Beginning" << endl;
        cout << "5) Delete from End" << endl;
        cout << "6) Delete from Given Position" << endl;
        cout << "7) Display List" << endl;
        cout << "8) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> value >> pos;
            list.insertAtPosition(value, pos);
            break;
        case 4:
            list.deleteFromBeginning();
            break;
        case 5:
            list.deleteFromEnd();
            break;
        case 6:
            cout << "Enter position to delete: ";
            cin >> pos;
            list.deleteFromPosition(pos);
            break;
        case 7:
            list.display();
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}