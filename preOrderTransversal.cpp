#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

void preOrder(Node* root) {
    if (root == nullptr) {
        return; 
    }
    
    cout << root->data << " ";
    
    preOrder(root->left);
    
    preOrder(root->right);
}

Node* insert(Node* root, int data) {
    if(root == nullptr) {
        return new Node(data);
    } else {
        Node* cur;
        if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        } else {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
    }
}

int main() {
    
    Node* root = nullptr;
    int totalNumbers;
    cin >> totalNumbers;
    
    for(int i = 0; i < totalNumbers; i++){
        int data;
        cin >> data;
        root = insert(root, data);
    }
    preOrder(root);



    
    return 0;
}
