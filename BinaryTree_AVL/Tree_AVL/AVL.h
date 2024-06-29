#pragma once

#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

typedef struct Node
{
    int data;
    int height;
    struct Node* left;
    struct Node* right;
}Node;

// Node* Tree_creat(int data);
Node* Tree_bst(Node* node , int data);
Node* Tree_insert(Node* node, int data);
void Tree_print(Node* node);
void Tree_founddata(Node* node);

