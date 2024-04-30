#include <stdio.h>

main() {
	int c, b = 0, t = 0, nl = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ': 
				b++;
				break;
			case '\t': 
				t++;
				break;
			case '\n': 
				nl++;
				break;
		}
	}

	printf("blanks : %d, tabs : %d, newlines : %d", b, t, nl);
}