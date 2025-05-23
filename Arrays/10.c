#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;
		int average = 0;
		int sum = 0;

		printf("Detecting average\n\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)malloc(size * sizeof(int));

		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		printf("\n");

		for(int i = 0; i < size; i++) {
			sum += arr[i];
		}

		average = sum / size;

		printf("Array's average = %d\n", average);

		free(arr);

		return 0;	
	}
