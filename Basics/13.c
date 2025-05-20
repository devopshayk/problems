#include <stdio.h>

	int main() {
		char sym;

		printf("Write symbol for convert to digit: ");
		scanf("%c", &sym);

		int result = (int)sym;

		printf("%c symbol = %d number\n", sym, result);

		return 0;
	}
