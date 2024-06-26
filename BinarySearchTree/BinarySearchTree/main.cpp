

#include "BinarySearchTree.h"

int main()
{
    Node* node = NULL;

    int carry[6] = {4, 5, 19, 23, 2, 8};

    for(int i = 0; i < 6; i++)
    {
        Tree_bst_insert(&node , carry[i]);
    }

    Tree_print(node);

    return 0;
}