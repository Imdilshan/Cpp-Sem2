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
		node *newnode = new node(val);
		// cout << "Inserted: " << val << endl;
		if(head == nullptr){
			head = newnode;
		}
		else{
			node *temp = head;
			while(temp->next != nullptr){
				temp = temp->next;
			}
			temp->next = newnode;
		}
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
	ll.insert(1);
	ll.insert(10);
	ll.insert(100);
	ll.insert(1000);
	ll.print();
	return 0;
}