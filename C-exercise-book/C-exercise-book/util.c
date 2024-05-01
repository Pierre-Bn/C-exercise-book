#include <stdio.h>

int length(char string[]) {
	int length = 0;

	while (string[length] != '\0') {
		length++;
	}

	return length;
}