#include <stdio.h>

	int main() {
		int hours, minutes;

		printf("Write hours for convert to minutes: ");
		scanf("%d", &hours);

		minutes = hours * 60;

		printf("%d hours = %d minutes\n", hours, minutes);

		return 0;
	}
