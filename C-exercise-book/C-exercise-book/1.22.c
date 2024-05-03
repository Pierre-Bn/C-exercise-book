#include <stdio.h>
#include "util.h"

#define TAB_SIZE 8
#define MAX_SIZE 1024

int splitLines(char string[], int maxLineSize);

int main() {
	char string[MAX_SIZE] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	splitLines(string, 50);
	printf("%s\n", string);
}

int splitLines(char string[], int maxLineSize)
{
	int c = 0, linePos = 0;
	int len = length(string);
	int x = 1;

	if (len <= maxLineSize) {
		return;
	}

	while(len > maxLineSize){
		for (int i = x*maxLineSize; i > (x-1)*maxLineSize; i++) {
			if (string[i] == ' ') {
				string[i] = '\n';
				break;
			}
		}
		x++;
		len -= maxLineSize;
	}
}