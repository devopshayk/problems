#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Detecting elements sum and mul\n");

		printf("\n");
		
		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)malloc(size * sizeof(int));

		printf("Write %d elemets for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int sum = 0;
		int mul = 1;

		for(int i = 0; i < size; i++) {
			sum += arr[i];
			mul *= arr[i];
		}

		printf("\n");

		printf("Elements sum = %d, mul = %d\n", sum, mul);

		free(arr);

		return 0;
	}
