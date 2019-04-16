myprog : main.o binarytree.o
	gcc main.o binarytree.o -o myprog

main.o : main.c node.h binarytree.h
	gcc -c main.c 

binarytree.o: binarytree.c node.h binarytree.h
	gcc -c binarytree.c
