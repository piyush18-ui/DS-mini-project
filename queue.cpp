#include <iostream>
using namespace std;

class Queue {
    int q[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == 4) {
            cout << "Queue Overflow!" << endl;
        } else {
            if (front == -1)
                front = 0;
            q[++rear] = x;
            cout << "Inserted: " << x << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << "Deleted: " << q[front++] << endl;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
        } else {
            cout << "Queue Elements: ";
            for (int i = front; i <= rear; i++) {
                cout << q[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting Program...";
            break;
        default:
            cout << "Invalid Choice!";
        }
    } while (choice != 4);

    return 0;
}
