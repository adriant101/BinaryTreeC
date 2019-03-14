#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>







typedef struct binary_tree{
 
	Node *root;
	int size;
}binary_tree;

void initialize(binary_tree *bt);
bool search(binary_tree *bt, int key);
void insert(binary_tree *bt, int value);
void printinorder(binary_tree *bt);
void printpreorder(binary_tree *bt);
void printpostorder(binary_tree *bt);
int btsize(binary_tree *bt);
int treeheight(binary_tree *bt);

#endif



