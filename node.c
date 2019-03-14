#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "node.h"


void newNode(int value){
	Node *newNode = malloc(sizeof(Node));
	newNode->data = value;
	newNode->left == NULL;
	newNode->right == NULL;



