#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "node.h"

int newNode(int inputdata) {
	//Reserving space for brances. 
	struct node newnode = NULL;
	newnode = (Node*)malloc(sizeof(Node));
	newnode.data = inputdata;
	newnode.left = NULL;
	newnode.right = NULL;
}
