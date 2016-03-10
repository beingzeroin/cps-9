#include "BST.h"
#include <stdlib.h>

BSTNode *createBSTNode(ElementType data)
{
    BSTNode * a = malloc(sizeof(BSTNode));
    a->data = data;
    a->left = a->right = NULL;
    return a;
}

BSTNode *insertBSTNode(BSTNode *root, ElementType data)
{
    // If root== NULL , new node should be returned
    BSTNode *t = createBSTNode(data);

    BSTNode *originalRoot = root;
    if(root==NULL)
        return t;
    else
    {
        while(1)
        {

            if(data <= root->data)
            {
                if(root->left==NULL)
                {
                    root->left=t;
                    break;
                }
                root = root->left;
            }
            else
            {
                if(root->right==NULL)
                {
                    root->right = t;
                    break;
                }
                root = root->right;
            }
        }
    }
    // Find a parent under which new node can be inserted


    return originalRoot;
}

BSTNode *rinsertBSTNode(BSTNode *root, ElementType data)
{
    if(root==NULL)
        return createBSTNode(data);

    if(data <= root->data)
         root->left = rinsertBSTNode(root->left, data);
    else
        root->right = rinsertBSTNode(root->right, data);
    return root;
}

BSTNode *rsearchBSTNode(BSTNode *root, ElementType data)
{

}


BSTNode *delteBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}
