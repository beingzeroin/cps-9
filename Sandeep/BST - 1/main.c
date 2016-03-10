#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

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

int main()
{
    BSTNode *root = NULL;
    int i;
    for(i=0;i<=20;i++)
        root = insertBSTNode(root, rand()%50);

    print_ascii_tree(root);
    return 0;
}
