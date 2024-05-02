#include <stdio.h>
#include "util.h"

#define TAB_SIZE 8
#define MAX_SIZE 1024

int entab(char string[], int tabsize);

int main() {
	char string[MAX_SIZE] = "   ....       .......   ....";
	printf("%s\n", string);
	entab(string, TAB_SIZE);
	printf("%s\n", string);
}


int entab(char string[], int tabsize) {
	int spacing;
	int spaceCount = 0, cursor = 0;
	char entabbed[MAX_SIZE];

	int spaces;
	int tabs;

	for (int i = 0; i < length(string); i++) {

		if (string[i] == ' ') {
			spaceCount++;
		}
		else {
			if (spaceCount > 1) {

				spacing = (i - spaceCount) % tabsize;
				spaces = (spaceCount + spacing) % tabsize;
				tabs = (spaceCount + spacing) / tabsize;

				while (tabs) {
					entabbed[cursor] = '\t';
					cursor++;
					tabs--;
				}
				while (spaces) {
					entabbed[cursor] = ' ';
					cursor++;
					spaces--;
				}
			}
			if (spaceCount == 1) {
				entabbed[cursor] = ' ';
				cursor++;
			}

			entabbed[cursor] = string[i];
			cursor++;
			spaceCount = 0;
		}
	}

	entabbed[cursor] = '\0';

	string = entabbed;
}

