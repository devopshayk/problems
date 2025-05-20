#include <stdio.h>

	int main() {
		char latter;

		printf("Write latter for transform to case(lower-upper): ");
		scanf("%c", &latter);

		latter ^= 32;

		printf("Latter transformed to %c\n", latter);

		return 0;
	}
