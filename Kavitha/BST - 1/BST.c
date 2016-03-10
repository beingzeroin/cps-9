#include "BST.h"
#include <stdlib.h>

BSTNode *createBSTNode(ElementType data)
{
    BSTNode *a=malloc(sizeof(BSTNode));
    a->data=data;
    a->left=NULL;
    a->right=NULL;


   return a;
}

BSTNode *rinsertBSTNode(BSTNode *root, ElementType data)
{    BSTNode *temp=root;
    BSTNode *t=createBSTNode(data);
    if(root==NULL)
        return t;
    while(temp!=NULL)
    {
    if(t->data<temp->data)
    {
       temp=temp->left;
       if(temp->left==NULL)
        temp->left=t;
    }
       else
       {
        temp=temp->right;
       if(temp->right==NULL)
        temp->right=t;
    }  }
    return root;

}

BSTNode *insertBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}

BSTNode *delteBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}
