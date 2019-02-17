#include<stdio.h>

int calculate_square() {
	float width, height, area;

	printf("SQUARE AREA CALCULATOR\n");
	printf("Please input number of \"width\" value: ");
	scanf("%f", &width);
	printf("Please input number of \"height\" value: ");
	scanf("%f", &height);

	area = width * height;
	
	printf("Total area of Square is: %.2f\n", area);
	return 0;
}

int calculate_triangle() {
	float base, height, area;

	printf("TRIANGLE AREA CALCULATOR\n");
	printf("Please input number of \"base\" value: ");
	scanf("%f", &base);
	printf("Please input number of \"height\" value: ");
	scanf("%f", &height);

	area = 0.5 * (base * height);

	printf("Total area of Triangle is: %.2f\n", area);
	return 0;
}

int program_exit() {
	printf("End Program\n");
	return 0;
}

int main() {
	int calculation_choice;

	do {
		printf("Type: 1 Calculate area of Square.\n");
		printf("Type: 2 Calculate area of Triangle.\n");
		printf("Type: 0 Exit program\n");
		printf("Please enter function of calculation: ");
		scanf("%d", &calculation_choice);
		
		calculation_choice = (int) calculation_choice;
	} while (calculation_choice != 0 && calculation_choice != 1 && calculation_choice != 2);

	if (calculation_choice == 1)
		calculate_square();
	else if (calculation_choice == 2)
		calculate_triangle();
	else
		program_exit();
}