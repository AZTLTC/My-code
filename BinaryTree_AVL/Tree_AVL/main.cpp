#include "AVL.h"

int main()
{

    Node* tree = NULL;

    int carry[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
    {
        tree = Tree_insert(tree, carry[i]);
    }
    Tree_print(tree);

    printf("\n");
    
    //Node* node = Tree_bst(tree , 23);

    //Tree_founddata(node);

	printf("ÎÒºÃË§");
	return 0;
}