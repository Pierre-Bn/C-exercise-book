#include <stdio.h>

split_word_to_lines() {
	int c, isLastBlank = 0, isBlank = 0;

	while ((c = getchar()) != EOF) {
		isBlank = (c == ' ' || c == '\t' || c == '\n');
		if (!isBlank) {
			putchar(c);
		}
		if (!isLastBlank && isBlank) {
			putchar('\n');
		}
		isLastBlank = isBlank;
	}
}