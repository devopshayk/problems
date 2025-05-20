#include <stdio.h>

	int main() {
		int years, days;

		printf("Write your age(years) for convert to days: ");
		scanf("%d", &years);

		days = years * 365;

		printf("You are %d days old\n", days);

		return 0;
	}
