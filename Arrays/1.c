#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;
		
		printf("Detecting maximum element\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);
		
		int * arr = (int*)malloc(size * sizeof(int));
		
		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int max = arr[0];

		for(int i = 0; i < size; i++) {
			if(max < arr[i]) max = arr[i];
		}

		printf("\n");

		printf("Max element is %d\n", max);

		free(arr);

		return 0;	
	}
