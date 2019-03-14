#ifndef NODE_H


typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}Node;

Node newNode(int value);
#endif