/*

This program is an implementation of programming exercise 1-13 from The C Programming Language
by K & R. 

The program prints a histogram of the lengths of words in its input, either horizontally 
or vertically


*/

#include <stdio.h>

#define VERTICAL 1



int main(int argc, char const *argv[])
{

	int i, j; 
	int wordLengths[argc-1];

	for (i = 0; i < argc-1; i++) 
		wordLengths[i] = 0; 

	int max = 0; 

	//get lengths of words and put into array
	for (i = 1; i < argc; i++) {

		int j;

		for (j = 0; argv[i][j] != '\0'; j++) {

			wordLengths[i-1]++;

			if (wordLengths[i-1] > max)
				max = wordLengths[i-1];
		}
	}

	
	//check to see which type of histogram will be printed

	if (VERTICAL) {


		for (i = (max * 2); i > 0; i--) {

			for (j=0; j < argc-1; j++) {

				if (wordLengths[j] == i) {
					printf("%c\t", '*');
					wordLengths[j]--;	
				}

			
			}

			printf("\n");

		}

		for (i = 1; i < argc; i++) 
			printf("%s\t", argv[i]);
		
		printf("\n");


	}

	else {

		for (i = 0; i < argc-1; i++) {

			printf("%s\t", argv[i+1]);

			for (j = 1; j < wordLengths[i]; j++) 
				printf("-");
			
			printf("\n");
		}	
	}

	return 0;
}