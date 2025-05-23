#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;
		int mul = 1;

		printf("Multiply elements at the same index in two arrays: \n");

		printf("\n");

		printf("Write size for arrays: ");
		scanf("%d", &size);

		int * arr1 = (int*)malloc(size * sizeof(int));
		int * arr2 = (int*)malloc(size * sizeof(int));

		printf("Write %d elements for array 1: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr1[i]);

		printf("Write %d elements for array 2: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr2[i]);

		printf("\n");

		printf("Equal indexes' product: ");
		for(int i = 0; i < size; i++) {
			mul = arr1[i] * arr2[i];
			printf("%d ", mul);
		}
		
		printf("\n");

		free(arr1);
		free(arr2);

		return 0;
	}
