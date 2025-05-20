#include <stdio.h>

	int main() {
		float x, y, result;

		printf("Write numbers for product: \n");

		printf("Write number 1: ");
		scanf("%f", &x);

		printf("Write number 2: ");
		scanf("%f", &y);

		result = x * y;

		printf("Result is: %.2f\n", result);

		return 0;
	}
