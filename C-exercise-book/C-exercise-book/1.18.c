#include <stdio.h>
#define MAX 1000

int getline(char line[], int maxline);
int cleanline(char line[], int size);

int main() {
	int len;
	char line[MAX];

	while ((len = getline(line, MAX)) > 0) {
		if (cleanline(line, len) > 1) {
			printf("cleaned line : %s\n", line);
		}
	}
	return 0;
}

int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

int cleanline(char s[], int size) {

	int hasNewline = (s[size - 1] == '\n');

	while (s[size - (1 + hasNewline)] == ' ' || s[size - (1 + hasNewline)] == '\t') {
		if (hasNewline) {
			s[size - 2] = '\n';
		}
		s[size - 1] = '\0';
		size--;
	}
	return size;
}
