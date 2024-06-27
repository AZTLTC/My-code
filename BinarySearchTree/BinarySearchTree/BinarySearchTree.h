#pragma once

#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

// Node* Tree_creat(int data);
Node* Tree_bst(Node* node , int data);
Node* Tree_bst_insert(Node* node, int data);
void Tree_print(Node* node);
void Tree_founddata(Node* node);

