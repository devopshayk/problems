#include <stdio.h>

	int main() {
		char latter;

		printf("Write latter for check vowel or not: ");
		scanf("%c", &latter);

		switch (latter) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				
				printf("Latter is vowel: %c\n", latter);
				break;
			default:
				printf("Latter is not vowel (consonant): %c\n", latter);
				break;
		}

		return 0;
	}
