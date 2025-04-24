#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int item) {
        if (top >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = item;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    int isEmpty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    void display() {
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();

    if (s.isEmpty() == 1)
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}