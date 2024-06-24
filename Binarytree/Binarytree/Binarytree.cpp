#include "Binarytree.h"

Tree* Tree_init(void)
{
    Tree* tree = (Tree*)malloc(sizeof(Tree));
    if(tree == NULL)
    {
        printf("Tree Empty!\n");
        exit(0);
    }

    tree -> root = (Node*)malloc(sizeof(Node));
    if(tree -> root == NULL)
    {
        printf("root malloc fail!\n");
        exit(0);
    }

    tree -> root = NULL;

    // tree -> data = 0;
    // tree -> left = NULL;
    // tree -> right = NULL;

    return tree;
}

static inline Node* Inster_node(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    if(node == NULL)
    {
        printf("node malloc fail!\n");
        exit(0);
    }

    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}

void Tree_inster(Tree* tree , int data)
{
    Node* node = Inster_node(data);

    if(tree -> root == NULL)
    {
        tree -> root = node;
        return ;
    }

    Node* temp = tree -> root;
    while(temp != NULL)
    {
        if(data < temp -> data)
        {
            if(temp -> left == NULL)
            {
                temp -> left = node;
                return ;
            }
            temp = temp -> left;
        }
        if(temp -> right == NULL)
        {
            temp -> right = node;
            return ;
        }
        temp = temp -> right;
    }
}

void Tree_print(Node* node)
{
    if(node != NULL)
    {
        printf(" %d ", node -> data);
        Tree_print(node -> left);
        Tree_print(node -> right);
    }
}

