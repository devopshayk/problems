#include <stdio.h>

	int main() {
		printf("Multiplication table for 1-10 numbers\n");

		for(int i = 1; i <= 10; i++) {
			printf("\n");
			for(int j = 1; j <= 10; j++) {
				printf("\t%d * %d = %d\n", i, j, i * j);
			}
		}

		return 0;
	}
