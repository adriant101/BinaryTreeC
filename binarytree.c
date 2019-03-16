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
	

	
}


void insert(binary_tree *bt, int data) {
   Node  *tempNode = (Node*)malloc(sizeof(Node));
    Node *current;
    Node *parent;

   tempNode->data = data;
   tempNode->left = NULL;
   tempNode->right = NULL;

   //if tree is empty
   if(bt->root == NULL) {
      bt->root = tempNode;
        bt->size++;
   } else {
      current = bt->root;
      parent = NULL;

      while(1) { 
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->left;                
            
            //insert to the left
            if(current == NULL) {
               parent->left = tempNode;
                 bt->size++;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->right;

            //insert to the right
            if(current == NULL) {
               parent->right = tempNode;
                 bt->size++;
               return;
            }
         }
      }
      
   }
    
}


void printNodeOrder (Node *node){
    if(node != NULL) {
      printNodeOrder(node->left);
      printf("%d ",node->data);          
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

int treeHeightTraverse(Node* node){
    if (node==NULL)  
       return 0; 
   else 
   { 
       /* compute the depth of each subtree */
       int lDepth = treeHeightTraverse(node->left); 
       int rDepth = treeHeightTraverse(node->right); 
  
       /* use the larger one */
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
}
int treeheight(binary_tree *bt)  
{  
    
return treeHeightTraverse(bt->root); 
    

}