#include "BinarySearchTree.h"

static inline Node* Tree_create(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));  //(Node*)malloc(sizeof(Node));

    if(node == NULL)
    {
        printf("Tree malloc fail!\n");
        exit(0);
    }

    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}

// static inline void 

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

Node* Tree_bst_insert(Node* node , int data)
{
    if(node == NULL)
    {
        return Tree_create(data);
    }
    
    if(node -> data == data)
    {
        return NULL;
    }
    else
    {
        if(data < node -> data)
        {
            node -> left = Tree_bst_insert(node -> left , data);
        }
        else if(data > node -> data)
        {
            node -> right = Tree_bst_insert(node -> right , data);
        }
    }
    return node;
}

void Tree_print(Node* node)
{
    if(node != NULL)
    {
        Tree_print(node->left);
        printf("%d " , node -> data);
        Tree_print(node -> right);
    }
    return ;
}

void Tree_founddata(Node* node) 
{
    if (node != NULL) {
        printf("找到的数据: %d\n", node->data);
    } else {
        printf("没有找到数据\n");
    }
}

