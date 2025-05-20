#include <stdio.h>

	int main() {
		float weight, height, BMI;

		printf("Write your weight(kg): ");
		scanf("%f", &weight);

		printf("Write your height(m): ");
		scanf("%f", &height);

		BMI = weight / (height * height);

		printf("Your BMI = %.2f\n", BMI);

		return 0;
	}
