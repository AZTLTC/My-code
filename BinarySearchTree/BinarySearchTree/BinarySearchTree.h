#pragma once

#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

typedef struct Tree
{
    Node* root;
}Tree;

Tree* Tree_init(void);
Node* Tree_bst(Node* node , int data);
void Tree_bst_insert(Node** node , int data);
void Tree_print(Node* node);

