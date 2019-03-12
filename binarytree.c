#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binarytree.h"

void initialize(binary_tree *bt){

	bt->root = NULL;
	bt->size = 0;
}

//return true if the key is found within the binary tree
bool search(binary_tree *bt, int key){
	if(bt == NULL){
		return NULL;
	}
	else if(key < bt->data){
		return search(bt->left, key);
	}
	else{
		return search(bt->right, key);
	}
}

void insert(binary_tree *bt, int value){
	
	if(bt == NULL){
		bt = malloc(sizeof(Node));
		bt->data = value;
		bt->left == NULL;
		bt->right == NULL;
	}
	
	else if(value < bt->data){
		bt->left = insert(bt->left, value);
	}
	else{
		bt->right = insert(bt->right, value);
	}
	
}

void printinorder(binary_tree *bt){
	if(bt != NULL){
		printinorder(bt->left);
		printf("%d ", bt->data);
		printinorder(bt->right);
	}
}

void printpreorder(binary_tree *bt){
	if(bt != NULL){
		printf("%d ", bt->data);
		printpreorder(bt->left);
		printpreorder(bt->right);
	}
}

void printpostorder(binary_tree *bt){
	if(bt != NULL){
		printpostorder(bt->left);
		printpostorder(bt->right);
		printf("%d ", bt->data);
	}
	
}

int btsize(binary_tree *bt){
	return bt->size;
}

int treeheight(binary_tree *bt){
	int leftHeight, rightHeight;
	if(root == NULL){
		return -1;
	}
	leftHeight = treeheight(bt->left);
	rightHeight = treeheight(bt->right);
	
}
