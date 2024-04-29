#include <stdio.h>

float celciusToFarenheit(float temp);
float farenheitToCelcius(float temp);

int main() {
	float celcius = 0.0;
	printf("°F\t°C\n");
	printf("----------------\n");
	for (int farenheit = 300; farenheit >= 0; farenheit -= 20) {
		celcius = farenheitToCelcius(farenheit);
		printf("%d\t%.1f\n", farenheit, celcius);
	}
	return 0;
}

float celciusToFarenheit(float temp)
{
	return (9.0 / 5.0) * (temp + 32.0);
}

float farenheitToCelcius(float temp)
{
	return (5.0 / 9.0) * (temp - 32.0);
}
