#include <stdio.h>

	int main() {
		double x;

		printf("Enter your desired number: ");
		scanf("%lf", &x);

		printf("Your number is: %.2lf\n", x);

		return 0;
	}
