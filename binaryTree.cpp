#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* getnode(){
    struct Node* temp = new struct Node;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct Node* insert(struct Node* root, int item){
    struct Node* temp = getnode();
    if(root == NULL){
        root = temp;
    }
    else if(root->data >= item){
        root->left = insert(root->left, item);
    }
    else{
        root->right = insert(root->right, item);
    }
    temp->data = item;
    return root;
}

void viewAll(struct Node* root){
    if(root!= NULL){
        cout<<root->data<<' ';
        viewAll(root->left);
        viewAll(root->right);
    }
}

int main(){
    struct Node* Tree1;
    int list[7]{5, 8, 9, 7, 3, 4, 1};
    Tree1 = NULL;
    for(int i : list){
        Tree1 = insert(Tree1, i);
    }
    /*Tree1 = insert(Tree1, 5);
    Tree1 = insert(Tree1, 8);
    Tree1 = insert(Tree1, 9);
    Tree1 = insert(Tree1, 7);
    Tree1 = insert(Tree1, 3);
    Tree1 = insert(Tree1, 4);
    Tree1 = insert(Tree1, 1);*/
    viewAll(Tree1);
    return 0;
}