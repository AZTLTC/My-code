#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <string>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

/**
 * 	初始化链表
 */
Node* Init_link();

/**
 * 	头插
 */
void Headinsert(Node* list , int data);

/**
 * 	尾插
 */
void Tailinsert(Node* list , int data);

/**
 * 	删除
 */
void Delete(Node* list , int data);

/**
 * 	打印链表
 */
void Printlist(Node* list);