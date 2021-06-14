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



void preorderView(struct Node* root){
    if(root!= NULL){
        cout<<root->data<<' ';
        preorderView(root->left);
        preorderView(root->right);
    }
}
void inorderView(struct Node *root)
{
    if (root != NULL)
    {
        inorderView(root->left);
        cout << root->data << ' ';
        inorderView(root->right);
    }
}

void postorderView(struct Node *root)
{
    if (root != NULL)
    {
        postorderView(root->left);
        postorderView(root->right);
        cout << root->data << ' ';
    }
}

bool searchTree(struct Node* root, int item){
    while(root != NULL){
        if(root->data == item){
            return true;
        }
        else if(item <= root->data)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

int main(){
    struct Node* Tree1;
    int list[7]{5, 8, 9, 7, 3, 4, 1};
    Tree1 = NULL;
    for(int i : list){
        Tree1 = insert(Tree1, i);
    }
    cout<<"Preorder: "; preorderView(Tree1); cout<<endl;
    cout<<"Inorder: "; inorderView(Tree1); cout << endl;
    cout<<"Postorder: "; postorderView(Tree1); cout << endl;
    if(searchTree(Tree1, 2)== true)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}