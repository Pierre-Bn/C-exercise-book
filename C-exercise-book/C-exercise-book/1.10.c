#include <stdio.h>

replace_blanks() {
	int c;

	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\b':
			putchar('\\');
			putchar('b');
			break;
		case '\t':
			putchar('\\');
			putchar('t');
			break;
		case '\\':
			putchar('\\');
			putchar('\\');
			break;
		default:
			putchar(c);
		}
	}
}