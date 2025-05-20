#include <stdio.h>

	int main() {
		int number;
		int count = 0;
		int i = 0;

		printf("Write a number to check if it's a power of 2: ");
		scanf("%d", &number);

		for(; i <= 31; i++) {
			if(number & 1) count++;
			number >>= 1;
		}

		printf("\n");

		if(count == 1) printf("True\n");
		else printf("False\n");

		return 0;
	}
