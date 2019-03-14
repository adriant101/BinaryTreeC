#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "binarytree.h"
#include "node.h"

void initialize(binary_tree *bt){

	bt->root = NULL;
	bt->size = 0;
}

//return true if the key is found within the binary tree
bool search(binary_tree *bt, int key){
	
	while(root){
		if(root->data == value){
			return true;
		}
		else if(root->data > value){
			root = root->left;
		}
		else if(root->data < value{
			root = root->right;
		}
		else{
			return false;
		}
	}
	
/*
	Node *current = bt->root;
	if(bt->root == NULL){
		return NULL;
	}
	else if(key < current->data){
		current = current->left;
		search(current, key);
	}
	else if(key > bt->root->data){
		current = current->right;
		search(bt->root->right, key);
	}
	
*/	
	
}

void insert(binary_tree *bt, int value){
	
	while(*root){
		if((*root)->data == value){
			return 1;
		}
		if((*root)->data > value){
			root = &((*root)->left);
		}
		else{
			root = &((*root)->right);
		}
	}
	(*root)->data = value;
	(*root)->left = NULL;
	(*root)->right = NULL;
	
/*
	if(bt->root == NULL){
		bt->root-> = malloc(sizeof(Node));
		bt->root->data = value;
		bt->root->left == NULL;
		bt->root->right == NULL;
		bt->size++;
	}
	
	else if(value < bt->data){
		bt->root->left = insert(bt->root->left, value);
		bt->size++;
	}
	else{
		bt->root->right = insert(bt->right, value);
		bt->size++;
	}
	
*/
	
}

void printinorder(binary_tree *bt){
	if(bt != NULL){
		printinorder(bt->root->left);
		printf("%d ", bt->root->data);
		printinorder(bt->root->right);
	}
}

void printpreorder(binary_tree *bt){
	if(bt != NULL){
		printf("%d ", bt->root->data);
		printpreorder(bt->root->left);
		printpreorder(bt->root->right);
	}
}

void printpostorder(binary_tree *bt){
	if(bt != NULL){
		printpostorder(bt->root->left);
		printpostorder(bt->root->right);
		printf("%d ", bt->root->data);
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
