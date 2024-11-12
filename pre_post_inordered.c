#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node*left;
    struct Node*right;

}Node;
Node*createNode(int data)
{
    Node*newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
void preorderTraverse(Node*root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorderTraverse(root->left);
        preorderTraverse(root->right);
    }
}
void inorderTraverse(Node*root)
{
    if(root!=NULL)
    {
        inorderTraverse(root->left);
        printf("%d",root->data);
        preorderTraverse(root->right);
    }
}
void postorderTraverse(Node*root)
{
    if(root!=NULL)
    {
        postorderTraverse(root->left);
        postorderTraverse(root->right);
        printf("%d",root->data);
    }
}

int main()
{
    Node*root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->right->right=createNode(5);
    printf("Preorder Traverse:");
    preorderTraverse(root);
    printf("\n");
     printf("inorder Traversal:");
    inorderTraverse(root);
    printf("\n");
     printf("Postorder Traverse:");
    postorderTraverse(root);
    printf("\n");
    return 0;
}