#include <stdio.h>

main() {
	int c, isLastBlank = 0, isBlank = 0;

	while ((c = getchar()) != EOF) {
		isBlank = (c == ' ' || c == '\t');
		if (!isLastBlank || !isBlank) {
			putchar(c);
		}
		isLastBlank = isBlank;
	}
}