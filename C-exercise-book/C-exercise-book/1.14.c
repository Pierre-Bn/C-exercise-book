#include <stdio.h>

#define SIZE 26

char_freq_histo() {
	int c, isLastBlank = 0, isBlank = 0, currentSize = 0, maxFreq = 0;
	int letters[SIZE];

	for (int i = 0; i < SIZE; i++) {
		letters[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			letters[c - 'a']++;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		putchar(i + 'a');
		putchar('|');
		for (int j = 0; j < letters[i]; j++) {
			putchar('=');
		}
		putchar('\n');
	}
}