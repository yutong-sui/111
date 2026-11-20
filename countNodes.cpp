
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Complete this function
int countNodes(Node* head) {
    int count=0;
    Node* current = head;
    while(current != nullptr){
        count++;
        current = current->next;
    }

    return count;

}

int main() {
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    head->next = second;
    second->next = third;

    cout << countNodes(head) << endl;

    // Free allocated memory
    delete third;
    delete second;
    delete head;

    return 0;
}
