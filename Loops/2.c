#include <stdio.h>

	int main() {
		int a, b;
	       	int count = 0;

		printf("Write number for start ponit (A): ");
		scanf("%d", &a);

		printf("Write number for end point (B): ");
		scanf("%d", &b);

		for(int i = a; i <= b; i++) {
			if(i % 5 == 0) ++count;
		}

		printf("Numbers count --> %d\n", count);

		return 0;
	}
