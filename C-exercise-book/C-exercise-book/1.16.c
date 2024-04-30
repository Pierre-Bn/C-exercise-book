#include <stdio.h>
#define MAX 50

int getline(char line[], int maxline);
void copy(char to[], char from[]);

print_correct_line_len() {
	int len, max = 0;
	char line[MAX], longest[MAX];
	int totalLen = 0;

	while ((len = getline(line, MAX)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		totalLen += len;
	}
	if (max > 0) {
		printf("%s\n", longest);
		printf("len: %d\n", totalLen);
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

void copy(char to[], char from[]) {
	int i = 0;

	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}