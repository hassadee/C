#include<stdio.h>

void create_triangle(int triangle_size) {
	int column, row, starting_point = 0;
	int triangle_column = 0;
	int triangle_row = triangle_size;

	printf("Triangle size is: %d\n", triangle_size);

	if (triangle_row == 1) {
		printf(" - \n");
	} else {
		triangle_column = triangle_row + (triangle_row - 1);
		printf("Triangle Column = %d\n", triangle_column);

		for(row = 0; row < triangle_row; row++) {
			for(column = 0; column < triangle_column; column++) {
				if (column < triangle_row - (row + 1) || column >= triangle_row + row) {
					printf(" ");
				} else {
					if(starting_point % 2 == 0) {
						printf("-");
					} else {
						printf("*");
					}
					starting_point++;
				}
			}
			printf("\n");
			starting_point = 0;
		}
	}
}

int main() {
	int input_number;

	do {
		printf("Please input number (>= 1): ");
		scanf("%d", &input_number);
	} while(input_number < 1);

	create_triangle(input_number);

	return 0;
}
