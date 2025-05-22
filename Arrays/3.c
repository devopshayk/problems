#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Detecting maximum element's index\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)calloc(size, sizeof(int));

		printf("Write %d elements for array: ", size);
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int max = arr[0];
		int max_index = 0;

		for(int i = 0; i < size; i++) {
			if(max < arr[i]) {
			       	max = arr[i];
				max_index = i;
			}
		}

		printf("\n");

		printf("Maximum element is %d, index = %d\n", max, max_index);

		free(arr);

		return 0;
	}
