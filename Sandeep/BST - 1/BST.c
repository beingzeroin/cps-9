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


    // Find a parent under which new node can be inserted


    return NULL;
}

BSTNode *rinsertBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}



BSTNode *delteBSTNode(BSTNode *root, ElementType data)
{
    return NULL;
}
