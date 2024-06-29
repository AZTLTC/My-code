#include "AVL.h"

static inline Node* Tree_create(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));  //(Node*)malloc(sizeof(Node));

    if(node == NULL)
    {
        printf("Tree malloc fail!\n");
        exit(0);
    }

    node -> data = data;
    node -> height = 1;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}

static inline int Tree_hight(Node* node)
{
    if(node == NULL)
    {
        return 0;
    }
    return node -> height;
}

static inline int Tree_blance(Node* node)
{
    if(node == NULL)
    {
        return 0;
    }
    return Tree_hight(node -> left) - Tree_hight(node -> right);
}

static inline Node* Tree_rightrotate(Node* node)
{
    Node* nodeleft = node -> left;
    Node* nodeleft_right = nodeleft -> right;

    nodeleft -> right = node;
    node -> left = nodeleft_right;

    node -> height = max(Tree_hight(node -> left), Tree_hight(node -> right)) + 1;
    nodeleft -> height = max(Tree_hight(nodeleft -> left), Tree_hight(nodeleft -> right)) + 1;

    return nodeleft;
}

static inline Node* Tree_leftrotate(Node* node)
{
    Node* noderight = node -> right;
    Node* noderight_left = noderight -> left;

    noderight -> left = node;
    node -> right = noderight_left;

    node -> height = max(Tree_hight(node -> left), Tree_hight(node -> right)) + 1;
    noderight -> height = max(Tree_hight(noderight -> left), Tree_hight(noderight -> right)) + 1;

    return noderight;
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

Node* Tree_insert(Node* node , int data)
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
            node -> left = Tree_insert(node -> left , data);
        }
        else if(data > node -> data)
        {
            node -> right = Tree_insert(node -> right , data);
        }
    }

    node -> height = 1 + max(Tree_hight(node -> left) , Tree_hight(node -> right));

    int balance = Tree_blance(node);

    //LL
    if(balance > 1 && data < node -> left -> data)
    {
        return Tree_rightrotate(node);
    }
    // 右右情况
    if (balance < -1 && data > node -> right -> data)
    {
        return Tree_leftrotate(node);
    }
    // 左右情况
    if (balance > 1 && data > node -> left -> data)
     {
        node -> left = Tree_leftrotate(node -> left); 
        return Tree_rightrotate(node);
    }

    // 右左情况
    if (balance < -1 && data < node -> right -> data)
    {
        node -> right = Tree_rightrotate(node -> right);
        return Tree_leftrotate(node);
    }

    return node;
}

void Tree_print(Node* node)
{
    if(node != NULL)
    {
        printf("%d " , node -> data);
        Tree_print(node->left);
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

