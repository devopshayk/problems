#include <stdio.h>

	int main() {
		int number;

		printf("Write number for reverse printing: ");
		scanf("%d", &number);
		
		int copy = number;
		
		printf("%d number's reversed = ", number);
		while(copy) {
			number %= 10;
			printf("%d", number);
			copy /= 10;
			number = copy;
		}

		printf("\n");

		return 0;
	}
