#include <stdio.h>

	int main() {
		int x, y, total;

		printf("Write numbers for sum: \n");

		printf("Write number 1: ");
		scanf("%d", &x);

		printf("Write number 2: ");
		scanf("%d", &y);

		total = x + y;
		
		printf("Result is: %d\n", total);

		return 0;
	}
