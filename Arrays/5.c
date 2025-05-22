#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Detecting sum of minimum and maximum elements\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)malloc(size * sizeof(int));

		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int min = arr[0];
		int max = min;

		for(int i = 0; i < size; i++) {
			if(min > arr[i]) min = arr[i];
			else if(max < arr[i]) max = arr[i];
		}

		int result = max + min;

		printf("\n");

		printf("Sum of maximum and minimum elements = %d\n", result);

		free(arr);

		return 0;
	}
