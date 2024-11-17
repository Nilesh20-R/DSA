#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;
node* tail = NULL;

void enqueue(int x) {
    node* newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    
    if (head == NULL && tail == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void display() {
    if (head == NULL && tail == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void peek() {
    if (head == NULL) {
        cout << "Queue is empty, no front element" << endl;
        return;
    }
    cout << "Front/peek element is: " << head->data << endl;
}

void dequeue() {
    if (head == NULL) {
        cout << "Queue is empty, cannot dequeue" << endl;
        return;
    }
    
    node* temp = head;
    cout << "Deleted element is: " << head->data << endl;
    head = head->next;
    delete temp;
}

int main() {
    enqueue(10);
    enqueue(-3);
    enqueue(4);
    display();
    dequeue();
    peek();
    display();
    
    return 0;
}
