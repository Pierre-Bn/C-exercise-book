#include <stdio.h>

reverse_temp() {
	float f = 0.0;
	printf("°C\t°F\n");
	printf("----------------\n");
	for (int c = 0; c <= 300; c += 20) {
		f = (9.0 / 5.0) * (c + 32.0);
		printf("%d\t%.1f\n", c, f);
	}
}
