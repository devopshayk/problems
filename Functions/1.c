#include <stdio.h>

	void multiplication_table(int number);

	int main() {
		int number;

		printf("Write number for create multiplication table: ");
		scanf("%d", &number);

		multiplication_table(number);

		return 0;
	}

	void multiplication_table(int number) {
		printf("\n");
		for(int i = 1; i <= 10; i++) printf(" %d * %d = %d\n", number, i, number * i);
	}
