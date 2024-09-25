// Implement the standard program of queue
#include <iostream>
using namespace std;

#define SIZE 6 // Define the size of the queue

class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    // Check if the queue is empty
    bool isEmpty() {
        if (front == -1) return true;
        return false;
    }

    // Add elements into the queue
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    // Remove element from the queue
    int dequeue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) { // Queue has only one element
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << "Deleted " << element << endl;
            return (element);
        }
    }

    // Display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    // Insert elements into the queue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    // Display the queue
    q.display();

    // Dequeue elements from the queue
    q.dequeue();
    q.dequeue();

    // Display the queue again
    q.display();

    return 0;
}