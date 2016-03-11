#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef int ElementType;
typedef struct bstNode BSTNode;
struct bstNode
{
    ElementType data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *createBSTNode(ElementType data);
BSTNode *createRandomBST(int nodeCount, int maxValue);
BSTNode *insertBSTNode(BSTNode *root, ElementType data);
BSTNode *rinsertBSTNode(BSTNode *root, ElementType data);
BSTNode *searchBSTNode(BSTNode *root, ElementType data);
BSTNode *rsearchBSTNode(BSTNode *root, ElementType data);
BSTNode *findMax(BSTNode *root);
BSTNode *findMin(BSTNode *root);
BSTNode *rfindMax(BSTNode *root);
BSTNode *rfindMin(BSTNode *root);
BSTNode *delteBSTNode(BSTNode *root, ElementType data);
BSTNode *rdelteBSTNode(BSTNode *root, ElementType data);


#endif // BST_H_INCLUDED
