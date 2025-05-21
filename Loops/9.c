#include <stdio.h>

	int main() {
		int number, copy;
		int sum = 1;

		printf("Write number for product factorial: ");
		scanf("%d", &number);
		
		copy = number;

		for(int i = number; i > 0; i--) {
			sum *= i;
		}

		printf("\n");

		printf("Factorial for %d = %d\n", copy, sum);

		return 0;
	}
