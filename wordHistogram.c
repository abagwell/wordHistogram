/*

This program is an implementation of programming exercise 1-13 from The C Programming Language
by K & R. 

The program prints a histogram of the lengths of words in its input, either horizontally 
or vertically


*/

#include <stdio.h>

#define VERTICAL 0
#define WORDCOUNT 5


int main(int argc, char const *argv[])
{

	int i, j; 
	int wordLengths[WORDCOUNT];

	for (i = 0; i < argc-1; i++) 
		wordLengths[i] = 0; 


	for (i = 1; i < argc; i++) {

		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
			wordLengths[i-1]++;
	}
	
	//check to see which type of histogram will be printed

	if (VERTICAL) {

		

	}

	else {


		for (i = 0; i < argc-1; i++) 
			printf("%d\n", wordLengths[i]);

	}

	return 0;
}