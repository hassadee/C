#include<stdio.h>

int main() {
	int num[] = {90, 80, 100, 30, 1};
	int num_length;
	int i, j;
	int temp;

	num_length = sizeof(num) / sizeof(num[0]);

	printf("sizeof(num) = %d\n", num_length);

	// Before
	printf("Before: ");
	for (i = 0; i < num_length; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	
	// Sorting
	for (j = 0; j < num_length; j++) {
		for (i = 0; i < num_length; i++) {
			if (num[i] > num[i+1]) {
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}
		}
	}

	// After
	printf("After: ");
	for (i = 0; i < num_length; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}