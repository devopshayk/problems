#include <stdio.h>

	int main() {
		int number, index;

		printf("Write number for reverse bit: ");
		scanf("%d", &number);

		printf("Write index for change: ");
		scanf("%d", &index);

		number ^= (1 << index);

		printf("Result is --> %d\n", number);

		return 0;
	}
