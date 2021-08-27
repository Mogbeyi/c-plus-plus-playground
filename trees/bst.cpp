#include <iostream>
#include <algorithm>
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

// bool search(BstNode* root, int data) {
//     if (root == NULL) return false;
//     if (root->data == data) return true;
//     else if(data <= root->data) return search(root->left, data);
//     else return search(root->right, data);
// }

bool search(BstNode* root, int data) {
    while (root) {
        if (root->data == data) return true;
        else if(data <= root->data) root = root->left;
        else root = root->right;
    }

    return false;
}

int findMin(BstNode* root) {
    if (!root) cout << "Error: Binary tree is empty" << endl; 
    int min = root->data;

    while (root) {
        if (root->data <= min) {
            min = root->data;
        }
        root = root->left;
    }

    return min;
}

int findMax(BstNode* root) {
    BstNode* current = new BstNode();
    current = root;
    if (!current) cout << "Error: Binary tree is empty" << endl;
    int max = current->data;

    while (current) {
        if (current->data > max) {
            max = current->data;
        }
        current = current->right;
    }

    return max;
}

int findHeight(BstNode* root) {
    if (!root) return -1;
    int maxLeft = findHeight(root->left);
    int maxRight = findHeight(root->right);
    
    return 1 + max(maxLeft, maxRight);
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
    root = insert(root, 6);

    // int number;
    // cout << "Enter a number to be searched" << endl;
    // cin >> number;

    // if (search(root, number) == true) cout <<"Found" << endl;
    // else cout <<"Not found" << endl;

    int min = findMin(root);
    int max = findMax(root);
    cout << "The minimum value in the tree is " << min << endl;
    cout << "The maximum value in the tree is " << max << endl;
    cout << "The height of the BST is " << findHeight(root) << endl;
}