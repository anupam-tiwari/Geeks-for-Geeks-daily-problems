#include <iostream> 

using namespace std; 

//A binary tree node
struct Node
{
    int data;
    Node* left, * right;
};



int main(){
    Node* root = new Node(); 
    root->data = 10; 
    root->left = new Node(); 
    root->left->data = -2; 
    root->right = new Node();
    root->right->data = 6; 
    root->left->left = new Node(); 
    root->left->left->data = 8;
    root->left->right = new Node(); 
    root->left->right->data = -4; 
    root->right->left = new Node(); 
    root->right->left->data = 7; 
    root->right->right = new Node(); 
    root->right->right->data = 5; 
    cout<<"hello world"; 
}