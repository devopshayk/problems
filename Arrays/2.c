#include <stdio.h>
#include <stdlib.h>

	int main() {
		int size;

		printf("Detecting minimum element\n");

		printf("\n");

		printf("Write size for array: ");
		scanf("%d", &size);

		int * arr = (int*)malloc(size * sizeof(int));
		
		printf("Write elements for array: ");
		for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

		int min = arr[0];

		for(int i = 0; i < size; i++) {
			if(min > arr[i]) min = arr[i];
		}

		printf("\n");
				
		printf("Minumum element is %d\n", min);

		free(arr);

		return 0;
	}
