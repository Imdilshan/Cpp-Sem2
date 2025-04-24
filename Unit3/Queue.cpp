#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int item) {
        if (rear >= 99) {
            cout << "Queue Overflow\n";
            return;
        }
        rear++;
        arr[rear] = item;
    }

    void dequeue() {
        if (isEmpty() == 1) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (isEmpty() == 1) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int isEmpty() {
        if (front > rear)
            return 1;
        else
            return 0;
    }

    void display() {
        cout << "Queue (front to back): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    q.display();

    cout << "Front element is: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty() == 1)
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    return 0;
}