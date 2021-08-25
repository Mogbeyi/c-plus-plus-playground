#include <iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* createNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->right = newNode->left = NULL;
    return newNode;
}

BstNode* insert(BstNode* root, int data) {
    if (root == NULL) {
        root = createNewNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data); 
    } else {
        root->right = insert(root->right, data); 
    }
       return root;
}

bool search(BstNode* root, int data) {
    if (root == NULL) return false;
    if (root->data == data) return true;
    else if(data <= root->data) return search(root->left, data);
    else return search(root->right, data);
}

int main() {
    BstNode* root; // pointer to root node
    root = NULL; // setting tree as empty
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);

    int number;
    cout << "Enter a number to be searched" << endl;
    cin >> number;

    if (search(root, number) == true) cout <<"Found" << endl;
    else cout <<"Not found" << endl;
}