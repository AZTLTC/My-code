#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>

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
void Tree_inster(Tree* tree , int data);
void Tree_print(Node* node);

