#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if (rear >= 99) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = val;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void print() {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};
int main() {

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.print();  
    q.dequeue();
    q.print();

    return 0;
}