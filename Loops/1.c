#include <stdio.h>

	int main() {
		// For Loop

		// 1
		for(int i = 0; i <= 10; i++) {
			printf("%i\n", i);
		}

		// 2
		for(int i = 10; i >= 0; i--) {
			printf("%i\n", i);
		}



		// While Loop

		// 1
		int i = 0;
		while(i <= 10) {
			++i;
			printf("%i", i);
		}

		// 2
		int i = 10;
		while(i >= 0) {
			--i;
			printf("%i", i);
		}


		
		// Do-While Loop
		
		// 1
		int i = 0;
		do {
			++i;
		} while(i <= 10);

		// 2
		int i = 10;
		do {
			--i;
		} while(i >= 0);

	}
