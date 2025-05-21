#include <stdio.h>

	int main() {
		int number;

		printf("Write number for create multiplication table: ");
		scanf("%d", &number);

		printf("\n");
		
		printf("Multiplication table for number %d\n", number);

		printf("\n");

		for(int i = 1; i <= 10; i++) {
			printf("\t%d * %d = %d\n", number, i, number * i);
		}
		
		printf("\n");

		return 0;
	}
