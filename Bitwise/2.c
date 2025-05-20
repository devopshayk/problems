#include <stdio.h>

	int main() {
		int number;

		printf("Write number for change first bit: ");
		scanf("%d", &number);

		number |= 1;
		
		printf("First index = 1, number is %d: \n", number);

		return 0;
	}
