#include <stdio.h>

void ex1_drawLinesWithRowColChar(int rows, int cols, char c);
void ex1_drawLinesWithRowCol(int rows, int cols);
void ex1_drawLines();
void ex1_drawLinesWithRow(int rows);

int main(void) {
	ex1_drawLinesWithRowColChar(3, 7, '#');
	//ex1_drawLinesWithRowCol(5, 5);
	//ex1_drawLinesWithRow(6);
	//puts("");
	//ex1_drawLinesWithRow(12);
	return 0;
}

void ex1_drawLinesWithRow(int t) {
	int x, y;
	for(x = 1; x <= t; x++) {
		for(y = 1; y <= 10; y++) {
			printf("*");
		}
		printf("\n");
	}
}

void ex1_drawLines() {
	int x, y;
	for(x = 1; x <= 5; x++) {
		for(y = 1; y <= 10; y++) {
			printf("*");
		}
		printf("\n");
	}
}


void ex1_drawLinesWithRowCol(int rows, int cols) {

	int x, y;
	for(x = 1; x <= rows; x++) {
		for(y = 1; y <= cols; y++) {
			printf("*");
		}
		printf("\n");
	}
}

void ex1_drawLinesWithRowColChar(int rows, int cols, char c) {
        int x, y;
        for(x = 1; x <= rows; x++) {
                for(y = 1; y <= cols; y++) {
                        printf("%c", c);
                }
                printf("\n");
        }
}

