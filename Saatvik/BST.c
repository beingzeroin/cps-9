#include "BST.h"
#include <stdlib.h>

BSTNode *createBSTNode(ElementType data)
{
   BSTNode *t=malloc(sizeof (BSTNode));
   t->data=data;
   t->left=NULL;
   t->right=NULL;
   return t;
}

BSTNode *insertBSTNode(BSTNode *root, ElementType data)
{
    BSTNode *a=createBSTNode(data), *curr=root ,*pre=NULL;
    if(root==NULL)
        return a;
    else
    {
        while(curr!=NULL)
        {
            pre=curr;
            if(curr->data>=data)
            {
                curr=curr->left;
            }
            else if(curr->data<data)
            {
                curr=curr->right;
            }
        }
         pre=a;
        return root;
    }
}

BSTNode *rinsertBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}

BSTNode *delteBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}
