#include <stdio.h>

	int main() {
		int x, result;

		printf("Write values for X: ");
		scanf("%d", &x);

		result = 4 * x + 21 * x * x - 12;

		printf("Result is: %d\n", result);

		return 0;
	}
