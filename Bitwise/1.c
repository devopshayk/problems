#include <stdio.h>

	int main() {
		int number;

		printf("Write number to check if its odd or even: ");
		scanf("%d", &number);

		if(number & 1) printf("%d number is odd\n", number);
		else printf("%d number is even\n", number);

		return 0;
	}
