#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Detecting minimum element's index\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)calloc(size, sizeof(int));

		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int min = arr[0];
		int min_index = 0;

		for(int i = 0; i < size; i++) {
			if(min > arr[i]) {
				min = arr[i];
				min_index = i;
			}
		}

		printf("\n");

		printf("Minimum element is %d, index = %d\n", min, min_index);
	
		free(arr);

		return 0;
	}
