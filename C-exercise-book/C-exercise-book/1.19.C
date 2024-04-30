#include <stdio.h>
#define MAX 1000

int getline(char line[], int maxline);
void reverseLine(char line[], int len);

int main() {
	int len;
	char line[MAX];

	while ((len = getline(line, MAX)) > 0) {
		reverseLine(line, len);
		printf("reversed line : %s\n", line);
		
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

void reverseLine(char s[], int len) {
	int temp;
	for (int i = 0; i < ((len-1) / 2); i++) {
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}