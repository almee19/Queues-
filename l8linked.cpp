#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    if (rear == nullptr) {  // If queue is empty
        front = rear = newNode;
        return;
    }
    
    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue is Empty" << endl;
        return;
    }
    
    Node* temp = front;
    cout << "Dequeue: " << front->data << endl;
    front = front->next;

    if (front == nullptr) {  // If queue becomes empty after dequeue
        rear = nullptr;
    }

    delete temp;
}

void empty() {
    if (front == nullptr) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }
}

void display() {
    if (front == nullptr) {
        cout << "Queue is Empty" << endl;
        return;
    }
    
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    display();
    
    enqueue(20);
    display();
    
    enqueue(30);
    display();
    
    dequeue();
    display();
    
    empty();
    
    return 0;
}