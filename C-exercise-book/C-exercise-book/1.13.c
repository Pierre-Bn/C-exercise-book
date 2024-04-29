#include <stdio.h>

#define SIZE 10

word_length_freq_histo() {
	int c, isLastBlank = 0, isBlank = 0, currentSize = 0, maxFreq = 0;
	int length[SIZE];

	for (int i = 0; i < SIZE; i++) {
		length[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		isBlank = (c == ' ' || c == '\t' || c == '\n');
		if (!isBlank) {
			currentSize++;
		}
		if (!isLastBlank && isBlank) {
			printf("%d ", currentSize);
			if (currentSize < SIZE) {
				length[currentSize - 1]++;
			}
			else {
				length[SIZE-1]++;
			}
			currentSize = 0;
		}
		isLastBlank = isBlank;
	}

	//histogramme horizontal
	for (int i = 0; i < SIZE; i++) {
		if (i + 1 == SIZE) {
			printf("%2d+ | ", i + 1);
		}
		else {
			printf("%2d  | ", i + 1);
		}
		for (int j = 0; j < length[i]; j++) {
			putchar('=');
		}
		putchar('\n');
	}

	//histogramme vertical
	for (int i = 0; i < SIZE; i++) {
		if (length[i] > maxFreq) {
			maxFreq = length[i];
		}
	}

	for (int i = maxFreq; i >= 0; i--) {
		for (int j = 0; j < SIZE; j++) {
			if (length[j] > i) {
				printf(" | ");
			}
			else {
				printf("   ");
			}
		}
		putchar('\n');
	}
	for (int i = 0; i < SIZE; i++) {
		printf("---");
	}
	putchar('\n');

	for (int i = 0; i < SIZE; i++) {
		if (i + 1 == SIZE) {
			printf("%2d+", i + 1);
		}
		else {
			printf("%2d ", i + 1);
		}
	}
}