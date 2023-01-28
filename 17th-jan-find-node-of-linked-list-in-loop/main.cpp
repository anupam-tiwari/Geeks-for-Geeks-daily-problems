#include <iostream> 

using namespace std; 

class Node{
    public: 
        int data; 
        Node* next; 
}; 

void printer(Node* node){
    while(node != NULL){
        cout<<node->data; 
        node = node->next;
    }
}

int main(){
    Node* head = new Node(); 
    head->data = 1; 
    head->next = new Node(); 
    head->next->data = 2; 
    head->next->next = new Node(); 
    head->next->next->data = 3; 
    head->next->next->next = new Node(); 
    head->next->next->next->data = 4; 
    head->next->next->next->next = new Node(); 
    head->next->next->next->next->data = 5; 
    head->next->next->next->next->next = head->next; 

    printer(head); 
}