/*
 * I am starting off with code from the book Build Your Own Lisp
 * by Daniel Holden. Much of this code will belong to him...
 * Until I can make my own changes >:) 
 * Daniels comments will be formatted his way, my questions will be formatted
 * as double slashes
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

/* Declare a buffer */
static char input[2048];

int main(int argc, char** argv) {
	/* Print version and exit information */
	puts("Lispy version: 0.0.0.0.1");
	puts("Press Ctrl+C to exit\n");


	/* Infinite loop */
	while(1) {
		/* Output prompt. */
		// Why fputs vs puts?
		fputs("Lispy> ", stdout);
		
		/* Read a line of user input max size 2048 */
		fgets(input, 2048, stdin);

		/* Echo it back to user */
		printf("No you're a %s", input);
	}

	return EXIT_SUCCESS;
}
