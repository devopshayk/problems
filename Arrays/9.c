#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Enter array elements (will be printed in reverse): \n\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		float * arr = (float*)calloc(size, sizeof(float));

		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%f", &arr[i]);

		printf("\n");

		printf("Reversed array: ");
		for(int i = size - 1; i >= 0; i--) printf("%.2f ", arr[i]);

		printf("\n");

		free(arr);

		return 0;
	}
