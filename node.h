#ifndef NODE_H


typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}Node;

void newNode(int inputdata);
#endif