#include<stdio.h>
int main()
{
int node;
int isBST(struct node* node){
if(node==NULL)
return 1;
if(node->left!=NULL&&node->left->data>node->data)
return 0;
if(node->right!=NULL&&node->right->data<node->data)
return 0;
if(!isBST(node->lleft)||!isBST(node->right))
return 0;
/* passing all that, it is a BST*/
return 1;
}
}

