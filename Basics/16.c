#include <stdio.h>

	int main() {
		int x, y, result;

		printf("Write numbers for return remainder: \n");
		printf("\n");

		printf("Write number 1: ");
		scanf("%d", &x);

		printf("Write number 2: ");
		scanf("%d", &y);

		result = x % y;

		printf("\n");
		printf("Result is --> %d %% %d = %d\n", x, y, result);

		return 0;
	}
