#include <stdio.h>

	int main() {
		int number;
		int count = 0;

		printf("Write number for sum 1 bits count: ");
		scanf("%d", &number);

		for(int i = 0; i <= 31; i++) {
			if(number & 1) count++;
			number >>= 1;
		}

		printf("Count of 1 bits = %d\n", count);

		return 0;
	}
