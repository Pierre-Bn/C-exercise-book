#include <stdio.h>
#include "util.h"

#define TAB_SIZE 8
#define MAX_SIZE 1024

int splitLines(char string[], int maxLineSize);

int main() {
	char string[MAX_SIZE] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	splitLines(string, 25);
	printf("%s\n", string);
}

int splitLines(char string[], int maxLineSize)
{
	/*int c = 0, linePos = 0;
	int len = length(string);
	int x = 1;
	int y;

	while(len > maxLineSize){
		for (int i = x*maxLineSize; i > (x-1)*maxLineSize; i++) {
			if (string[i] == ' ') {
				string[i] = '\n';
				y = maxLineSize - i;
				break;
			}
		}
		x++;
		len -= (maxLineSize - y);
	}*/

	int remainingLength = length(string);
	int split = 0;
	int temp = 0;

	while (remainingLength > maxLineSize) {
		split = 0;
		for (int i = remainingLength - maxLineSize; i < remainingLength; i++) {
			if (string[i] == ' ') {
				string[i] = '\n';
				remainingLength -= (remainingLength - i);
				split = 1;
				break;
			}
		}
		if (!split) {
			for (int i = remainingLength; i > remainingLength - maxLineSize; i--) {
				string[i] = string[i-1];
			}
			string[remainingLength - maxLineSize] = '\n';
			remainingLength -= maxLineSize;
		}
		printf("%d\n", remainingLength);
	}
}