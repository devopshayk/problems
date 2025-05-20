#include <stdio.h>

	int main() {
		int x, y;

		printf("Write numbers for calculating\n");
		printf("\n");

		printf("Write number 1: ");
		scanf("%d", &x);

		printf("Write number 2: ");
		scanf("%d", &y);
		
		printf("\n");

		printf("Sum: %d + %d = %d\n", x, y, x + y);
		printf("Sub: %d - %d = %d\n", x, y, x - y);
		printf("Mul: %d * %d = %d\n", x, y, x * y);
		printf("Div: %d / %d = %d\n", x, y, x / y);

		return 0;
	}
