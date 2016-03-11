#include "BST.h"
#include <stdlib.h>

BSTNode *rfindMin(BSTNode *root)
{
    if(root==NULL || root->left==NULL)
        return root;
    return findMin(root->left);
}
BSTNode *rfindMax(BSTNode *root)
{
    if(root==NULL || root->right==NULL)
        return root;
    return findMin(root->right);
}

BSTNode *findMin(BSTNode *root)
{
    if(root)
    {
        while(root->left!=NULL)
            root = root->left;
    }
    return root;
}

BSTNode *findMax(BSTNode *root)
{
    if(root)
    {
        while(root->right!=NULL)
            root = root->right;
    }
    return root;
}

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

BSTNode *createRandomBST(int nodeCount, int maxValue)
{
    int i;
    BSTNode* root = NULL;

    for(i=1;i<=nodeCount;i++)
        root = insertBSTNode(root, rand()%maxValue);
    return root;
}

BSTNode *rsearchBSTNode(BSTNode *root, ElementType data)
{
    if(root==NULL || root->data == data)
        return root;
    if(data < root->data)
        return rsearchBSTNode(root->left, data);
    return rsearchBSTNode(root->right, data);
}


BSTNode *delteBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}
