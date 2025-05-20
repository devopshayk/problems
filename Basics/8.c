#include <stdio.h>

	int main() {
		float C, F;

		printf("Write tamperature in Celsius: ");
		scanf("%f", &C);

		F = (C * 9/5) + 32;

		printf("Result in Fahrenheit: %.2f\n", F);
		
		return 0;
	}
