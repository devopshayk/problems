#include <stdio.h>

	int main() {
		int number;

		printf("Write number for make it 2 times bigger: ");
		scanf("%d", &number);

		number <<= 1;

		printf("Result is --> %d\n", number);

		return 0;
	}
