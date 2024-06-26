#include "BinarySearchTree.h"

Tree* Tree_init(void)
{
    Tree* tree = (Tree*)malloc(sizeof(Tree));

    if(tree == NULL)
    {
        printf("Tree malloc fail!\n");
        exit(0);
    }

    tree -> root = (Node*)malloc(sizeof(Node));

    if(tree -> root == NULL)
    {
        printf("Tree -> root malloc fail!\n");
        return 0;
    }

    tree -> root = NULL;

    return tree;
}

Node* Tree_bst(Node* node , int data)
{
    if(node == NULL)
    {
        return NULL;
    }

    if(node -> data == data)
    {
        return node;
    }
    else if(data < node -> data )
    {
        return Tree_bst(node -> left , data);
    }
    else if(data > node -> data)
    {
        return Tree_bst(node -> right , data);
    }
}

void Tree_bst_insert(Node** node , int data)
{
    if(*node == NULL)
    {
        *node = (Node*)malloc(sizeof(Node));
        if(*node == NULL)
        {
            return;
        }
        (*node) -> data = data;
        (*node) -> left = NULL;
        (*node) -> right = NULL;
    }
    
    if(data == (*node) -> data)
    {
        return;
    }

    if(data < (*node) -> data)
    {
        Tree_bst_insert(&((*node) -> left) , data);
    }
    else
    {
        Tree_bst_insert(&((*node) -> right) , data);
    }
}

void Tree_print(Node* node)
{
    if(node != NULL)
    {
        printf("%d " , node -> data);
        Tree_print(node -> left);
        Tree_print(node -> right);
    }
    return ;
}

