#include <stdio.h>

	int main() {
		int number, index, value;

		printf("Write number for change index: ");
		scanf("%d", &number);

		printf("Write index: ");
		scanf("%d", &index);

		value = number;
		number &= ~(1 << index);

		printf("%d number's %d index is changed: %d\n", value, index, number);

		return 0;
	}
