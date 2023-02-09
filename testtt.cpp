#include <iostream>
using namespace std;
 
struct node {
    char data;
    struct node* left;
    struct node* right;
};
 

void storeInorder(struct node* node, char inorder[], char* index_ptr)
{
   
    if (node == NULL)
        return;
 
   
    storeInorder(node->left, inorder, index_ptr);
 
   
    inorder[*index_ptr] = node->data;
    (*index_ptr)++; 
 
    
    storeInorder(node->right, inorder, index_ptr);
}
 

int countNodes(struct node* root)
{
    if (root == NULL)
        return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
}
 

int compare(const void* a, const void* b)
{
    return (*(char*)a - *(char*)b);
}
 
void arrayToBST(char* arr, struct node* root, char* index_ptr)
{
   
    if (root == NULL)
        return;
 
    
    arrayToBST(arr, root->left, index_ptr);
 
  
    root->data = arr[*index_ptr];
    (*index_ptr)++;
 
    
    arrayToBST(arr, root->right, index_ptr);
}
 

void binaryTreeToBST(struct node* root)
{
   
    if (root == NULL)
        return;
 
    
    int n = countNodes(root);
 
   
    char* arr = new char[n];
    char i = 0;
    storeInorder(root, arr, &i);
 
    
    qsort(arr, n, sizeof(arr[0]), compare);
 
    
    i = 0;
    arrayToBST(arr, root, &i);
 
    delete[] arr;
}
 

struct node* newNode(char data)
{
    struct node* temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
 

void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    
    printInorder(node->left);
 
   
    cout <<" "<< node->data;
 
  
    printInorder(node->right);
}
 

int main()
{
    struct node* root = NULL;
 
    root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
 
   
    binaryTreeToBST(root);
 
    cout <<"Following is Inorder Traversal of the converted BST:" << endl ;
    printInorder(root);
 
    return 0;
}