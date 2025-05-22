#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Enter an array — you’ll get each number divided by its length\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)malloc(size * sizeof(int));

		printf("Write elements for array: ");
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		for(int i = 0; i < size; i++) {
			arr[i] /= size;
		}

		printf("\n");

		printf("Updated array: ");
		for(int i = 0; i < size; i++) printf(" %d", arr[i]);

		printf("\n");

		free(arr);

		return 0;
	}
