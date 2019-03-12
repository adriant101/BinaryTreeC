#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "node.h"
#include "binarytree.h"

int main(int argc, char *argv[]){

	bool found = false;
	binary_tree bt;
	int token = 0;
	
	initialize(&bt);
	
	FILE* infile = NULL; //File pointer
	infile = fopen(argv[1], "r");
	
	if(infile == NULL){
		printf("Could not open the file.\n");
		return -1; //-1 indicates an error
	}
	
	fscanf(infile, "%d", &token);
	while(!feof(infile)){
		insert(&bt, token);
		fscanf(infile, "%d", &token);
	}
	
	printf("Print in order\n");
	printinorder(&bt);
	printf("\nPrint pre order\n");
	printpreorder(&bt);
	printf("\nPrint post order\n");
	printpostorder(&bt);
	printf("\n");
	found = search(&bt, 33);
	if(found){
		printf("FOUND 33\n");
	}
	found = search(&bt, 38);
	if(found){
		printf("FOUND 38\n");
	}
	printf("Number of elements in tree: %d\n", btsize(&bt));
	printf("Tree height: %d\n", treeheight(&bt));
	
	return 0;
}
