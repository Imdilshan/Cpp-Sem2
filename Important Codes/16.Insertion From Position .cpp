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
	void insert(int value, int pos){
		if(pos <= 0){
			  cout << "Invalid, Position must be 1 or higher." << endl;
			  return;
		}
		if(pos == 1){
			node *newnode = new node(value);
			newnode->next = head;
			head = newnode;
			return;
		}
		
		node *newnode = new node(value);
		node *temp = head;
		
		for(int i = 1; i < pos - 1 && temp != nullptr; i++){
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	
	void print(){
		if(head == nullptr){
			cout << "List is Empty" << endl;
		}
		else{
			node *temp = head;
			while(temp != nullptr){
				cout << temp->data << "->";
				temp = temp->next;
			}
			cout << "NULL" << endl;
		}
	}
};

int main(){
	singlyll ll;
	ll.insert(10,1);
	ll.insert(20,2);
	ll.insert(30,3);
	ll.insert(40,1);
	ll.insert(50,3);
	
	ll.print();
}