#include <stdio.h>

testing_eof() {
	printf("use ctrl+z to trigger EOF in terminal\n");
	int c;

	while (c = (getchar() != EOF)) {
		printf("eof : %d\n", !c);
	}

	printf("\neof : %d", !c);
}