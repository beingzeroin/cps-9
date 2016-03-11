#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
#include <assert.h>
#include <stdbool.h>

int testInsert()
{
    BSTNode *root = NULL;

    root = insertBSTNode(root, 5);

    root = insertBSTNode(root, 3);
    root = insertBSTNode(root, 1);
    root = insertBSTNode(root, 4);

    root = insertBSTNode(root, 7);
    root = insertBSTNode(root, 6);
    root = insertBSTNode(root, 9);

    print_ascii_tree(root);

    // Delete Root
    root = delteBSTNode(root, 5);

    print_ascii_tree(root);

    return 0;
}


int testRInsert()
{
    BSTNode *root = NULL;

    root = rinsertBSTNode(root, 5);

    root = rinsertBSTNode(root, 3);
    root = rinsertBSTNode(root, 1);
    root = rinsertBSTNode(root, 4);

    root = rinsertBSTNode(root, 7);
    root = rinsertBSTNode(root, 6);
    root = rinsertBSTNode(root, 9);

    print_ascii_tree(root);

    // Delete Root
    root = delteBSTNode(root, 5);

    print_ascii_tree(root);

    return 0;
}

int searchTest()
{
    BSTNode *root = NULL;

    root = rinsertBSTNode(root, 5);

    root = rinsertBSTNode(root, 3);
    root = rinsertBSTNode(root, 1);
    root = rinsertBSTNode(root, 4);

    root = rinsertBSTNode(root, 7);
    root = rinsertBSTNode(root, 6);
    root = rinsertBSTNode(root, 9);

    print_ascii_tree(root);

    BSTNode *ans = rsearchBSTNode(root, 1);
    assert(ans!=NULL && ans->data==1);

    ans = rsearchBSTNode(root, 4);
    assert(ans!=NULL && ans->data==4);

    ans = rsearchBSTNode(root, 6);
    assert(ans!=NULL && ans->data==6);

    ans = rsearchBSTNode(root, 9);
    assert(ans!=NULL && ans->data==9);

    return 0;
}

int main()
{
    BSTNode *root = createRandomBST(10, 100);
    print_ascii_tree(root);

    assert(true);

    return 0;
}
