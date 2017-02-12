// Pre-processor includes the stdio.h (Standard IO) header file
#include <stdio.h>

// Main function which execute as the application start
int main(void) {
	/* printf() and puts() functions can be used
	 * to output texts in to terminal */

	// printf() function outputs texts without breaking
	printf("Hello World\n");

	// puts() function automatically breaks the line
	puts("Hello World");

	puts("Hello\nWorld\n");

	puts("*****");
	puts("*   *");
	puts("*");
	puts("*   *");
	puts("*****");

	// Trigger the compiler EOF
	return 0;
}

/*
 * NOTES - C
 */
// C language is case sensitive
// Compile:
// $ gcc ccode.c -o ccode
// Execute:
// $ ./ccode

/*
 * NOTES - Vim
 */
// Create a file:
// $ vi filename.ext
// Switch to Insert mode
// i
// Save the file:
// [Esc]:w
// Save and quit:
// [Esc]:wq
// Force save, quit:
// [Esc]:wq!
// Turn on line numbering:
// :set number OR :set nu
// Turn off line numbering:
// :set nonumber OR :set nonu
