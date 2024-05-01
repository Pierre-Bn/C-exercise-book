#include <stdio.h>
#include "util.h"

#define TAB_SIZE 4
#define MAX_SIZE 1024

int detab(char string[], int tabsize);

int main() {
	char string[MAX_SIZE] = "test\tte\ttest\t\tte";
	printf("%s\n", string);
	detab(string, TAB_SIZE);
}

int detab(char string[], int tabsize) {
	int spacing = 0;
	char detabbed[MAX_SIZE];

	for (int i = 0, cursor = 0; i <= length(string); i++) {
		spacing = i % 4;
		switch (string[i]) {
		case ' ': {
			for (int j = 0; j < tabsize - spacing; j++) {
				detabbed[cursor + j] = ' ';
				cursor++;
			}
			break;
		}
		default: {
			detabbed[cursor] = string[i];
		}
		}
		cursor++;
	}

	printf("%s\n", detabbed);
}