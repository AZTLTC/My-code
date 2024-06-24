#include "Binarytree.h"

int main()
{
    Tree* tree = Tree_init();

    Tree_inster(tree , 7);
    Tree_inster(tree , 6);
    Tree_inster(tree , 8);

    Tree_print(tree -> root);

    return 0;
}