#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *next;
	node(int value){
		data = value;
		next = nullptr;
	}
};

class singlyll{
public:
	node *head;

	singlyll(){
		head = nullptr;
	}
	
	void insert(int val){
		node *newNode = new node(val);
		newNode->next = head;
		head = newNode;
	}
	
	void print(){
		  node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
	}
};

int main(){
	singlyll ll;
	
	ll.insert(100);
	ll.insert(200);
	ll.insert(300);
	ll.insert(400);
	ll.insert(500);
	ll.print();
}