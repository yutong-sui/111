#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int sumNodes(Node* head) {
    Node* current=head;
    int sum = 0;
    while (current!=nullptr){
        sum+=current->data;
        current=current->next;

    }
    return sum;



}
int main(){
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    head->next = second;
    second->next = third;

    cout << sumNodes(head) << endl;

    // Free allocated memory
    delete third;
    delete second;
    delete head;

    return 0;
}



