#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "node.h"

typedef stuct binary_tree{
	Node *root;
	int size;
}binary_tree;

void initialize(binary_tree *bt);
bool search(binary_tree *bt, int key);
void insert(binary_tree *bt, int value);
void printinorder(binary_tree *bt);
void printpreortder(binary_tree *bt);
void printpostorder(binary_tree *bt);
int btsize(binary_tree *bt);
int treeheight(binary_tree *bt);

#endif



