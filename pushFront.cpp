
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Complete this function
void pushFront(Node*& head, int value) {

    Node* newNode=new Node{value, nullptr};
    newNode->next=head;
    head=newNode;

}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};

    pushFront(head, 5);

    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    // Free memory
    while (head != nullptr) {
        Node* old = head;
        head = head->next;
        delete old;
    }

    return 0;
}
