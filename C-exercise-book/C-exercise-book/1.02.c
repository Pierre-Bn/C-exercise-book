#include <stdio.h>

main() {
	float celcius = 0.0;
	printf("�F\t�C\n");
	printf("----------------\n");
	for (int farenheit = 0; farenheit <= 300; farenheit += 20) {
		celcius = (5.0 / 9.0) * (farenheit - 32.0);
		printf("%d\t%.1f\n", farenheit, celcius);
	}
}