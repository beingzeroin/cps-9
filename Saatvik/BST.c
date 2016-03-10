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
    BSTNode *a=createBSTNode(data), *curr=root;
    if(root==NULL)
        return a;
    else
    {
        while(curr!=NULL)
        {
            if(curr->data>=data)
            {
                if(curr->left==NULL)
                {
                    curr->left=a;
                    break;
                }
                curr=curr->left;
            }
            else if(curr->data<data)
            {
                if(curr->right==NULL)
                {
                    curr->right=a;
                    break;
                }
                curr=curr->right;
            }
        }
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
