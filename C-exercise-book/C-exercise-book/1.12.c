#include <stdio.h>

main() {
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