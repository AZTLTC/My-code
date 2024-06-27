

#include "BinarySearchTree.h"

int main()
{
    Node* tree = NULL;

    int carry[6] = {4, 5, 19, 23, 2, 8};

    for(int i = 0; i < 6; i++)
    {
        tree = Tree_bst_insert(tree, carry[i]);
    }
    Tree_print(tree);

    printf("\n");
    
    Node* node = Tree_bst(tree , 23);

    Tree_founddata(node);

    return 0;
}


