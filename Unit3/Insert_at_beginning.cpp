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
private:
	node *head;
public:
	singlyll(){
		head = nullptr;
	}
	
	void insert(int val){
		node *newNode = new node(val);
		newNode->next = head;
		head = newNode;
	}
	
	void print(){
		if(head == nullptr){
			cout << "Linked List is Empty" << endl;
		}
		else{
			node *temp = head;
			while(temp != nullptr){
				cout << temp->data << "->";
				temp = temp->next;
			}
			cout << "nullptr" << endl;
		}
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