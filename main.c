/*
 * I am starting off with code from the book Build Your Own Lisp
 * by Daniel Holden. Much of this code will belong to him...
 * Until I can make my own changes >:) 
 * Daniels comments will be formatted his way, my questions will be formatted
 * as double slashes
 */

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

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
		// Why fputs vs puts? Because puts adds a \n
		char *input = readline("lispy> ");

		/* Add history */
		add_history(input);

		/* Echo it back to user */
		printf("No you're a %s\n", input);
	
		/* Free the memory */
		free(input);
	}

	return EXIT_SUCCESS;
}
