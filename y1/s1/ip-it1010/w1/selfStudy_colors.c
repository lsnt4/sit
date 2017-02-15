#include <stdio.h>
#include "selfStudy_colors.h"

int main() {
	printf(ANSI_COLOR_RED		"RED "		ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN		"GREEN "	ANSI_COLOR_RESET);
	printf(ANSI_COLOR_YELLOW	"YELLOW "	ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BLUE		"BLUE "		ANSI_COLOR_RESET);
	printf(ANSI_COLOR_MAGENTA	"MAGENTA "	ANSI_COLOR_RESET);
	printf(ANSI_COLOR_CYAN		"CYAN "		ANSI_COLOR_RESET "\n");
	return 0;
}

/*
 * References:
 */

// Colors - http://stackoverflow.com/a/3219471/3683435
// Color codes - https://en.wikipedia.org/wiki/ANSI_escape_code#Colors