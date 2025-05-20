#include <stdio.h>

	int main() {
		int number;
		int count = 0;

		printf("Write number to check if the count of 1's is odd or even: ");
		scanf("%d", &number);

		for(int i = 0; i <= 31; i++) {
			if(number & 1) count++;
			number >>= 1;
		}

		if(count & 1) printf("Bits count is odd: %d\n", count);
		else printf("Bits count is even: %d\n", count);

		return 0;
	}
