#include <stdio.h>

	int main() {
		int a, b, c, average;

		printf("Write numbers for calculate average: \n");

		printf("Write first number: ");
		scanf("%d", &a);

		printf("Write second number: ");
		scanf("%d", &b);

		printf("Write third number: ");
		scanf("%d", &c);

		average = (a + b + c) / 3;

		printf("Average = %d\n", average);

		return 0;
	}
