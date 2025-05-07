#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int value) {
        data = value;
        next = nullptr;
    }
};

class singlyll {
public:
    node *head;

    singlyll() {
        head = nullptr;
    }

    void insert(int val) {
        node *newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }

    void deleteFromPosition(int pos) {
        if (pos <= 0 || head == nullptr) return;
        if (pos == 1) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next; i++) {
            temp = temp->next;
        }
        if (temp->next == nullptr) return;
        node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    void deleteFromEnd() {
        if (head == nullptr) return;
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        node* temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    singlyll ll;

    ll.insert(10);   
    ll.insert(20);  
    ll.insert(30);  
    ll.insert(40);   
    ll.insert(50);   

    ll.print();      

    ll.deleteFromPosition(3); 
    ll.print();    

    ll.deleteFromPosition(1);  
    ll.print();    

    ll.deleteFromEnd();       
    ll.print();

    return 0;
}