#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define TURE	1
#define FALSE	0

typedef struct Node
{
	int data;
	struct Node* pre;
	struct Node* next;
}Node;

Node* Initlist(void);
void Headinsert(Node* list , int data);
void Tailinsert(Node* list , int data);
int Delete(Node* list , int data);
void Printlist(Node* list);

