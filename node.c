#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "node.h"

void newNode(int inputdata) {
	//Reserving space for brances. 
	Node *newnode = (Node*)malloc(sizeof(Node));
	newnode->data = inputdata;
	newnode->left = NULL;
	newnode->right = NULL;
}
