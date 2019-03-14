#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdbool.h>


#include "node.h"

#include "binarytree.h"


void initialize(binary_tree *bt){
    
	bt->root = NULL;
	bt->size = 0;
}

//return true if the key is found within the binary tree
bool search(binary_tree *bt, int key){
	
	while(bt->root){
		if(bt->root->data == key){
			return true;
		}
		else if(bt->root->data > key){
			bt->root = bt->root->left;
		}
		else if(bt->root->data < key){
			bt->root = bt->root->right;
		}
		else{
			return  false;
		}
	}
	
/*
	Node *current = bt->root;
	if(bt->root == NULL){
		return NULL;
	}
<<<<<<< HEAD
	else if(key < (root->data)){
        Node *current = root;
		return search(root->left, key);
	}
	else{
		return search(root->right, key);
=======

	else if(key < current->data){
		current = current->left;
		search(current, key);
	}
	else if(key > bt->root->data){
		current = current->right;
		search(bt->root->right, key);

	else if(key < (bt->root->data)){
        Node *current = bt->root;
		return search(bt->root->left, key);
	}
	else{
		return search(bt->root->right, key);

>>>>>>> 4a791cf366396b1e29219a9e90745dacacbfef98
	}
	
*/	
	
}

void insert(binary_tree *bt, int value){
	
   Node* node = (Node*)malloc(sizeof(Node));
    
   
    node->data = value;
    node->left == NULL;
    node->right == NULL;
    
    
        if(bt->root == NULL){
            
           (bt->root) = node;
   }
	while(bt->root){
        
		
		if(bt->root->data > value){
            
			bt->root = (bt->root->left);
           
            
		}
		else{
			bt->root = (bt->root->right);
		}
	}
    (bt->root) = node;
    bt->size++;
    
	
	
}
void printNodeOrder (Node *node){
    if(node != NULL){
        printf("%d ", node->data);
		printNodeOrder(node->left);
		printNodeOrder(node->right);
	}
}

void printinorder(binary_tree *bt){
	printNodeOrder(bt->root);
}

void printNodePreOrder(Node *node){
    if(node != NULL){
		printf("%d ", node->data);
		printNodePreOrder(node->left);
		printNodePreOrder(node->right);
	}
}

void printpreorder(binary_tree *bt){
	printNodePreOrder(bt->root);
}

void printNodePostOrder(Node *node){
    if(node != NULL){
		printNodePostOrder(node->left);
		printNodePostOrder(node->right);
		printf("%d ", node->data);
	}
}
void printpostorder(binary_tree *bt){
	printNodePostOrder(bt->root);
	
}

int btsize(binary_tree *bt){
	return bt->size;
}

/*int treeheight(binary_tree *bt){
	int leftHeight, rightHeight;
	if(root == NULL){
		return -1;
	}
	leftHeight = treeheight(bt->left);
	rightHeight = treeheight(bt->right);
	
}*/
