/*
* Basic C Pointer (3) - Reverse string
*/

#include <stdio.h>

void reverse(char *message)
{
	int length = 0, c;
	char *begin_ptr, *end_ptr, temp;
 
	begin_ptr = message;
	end_ptr = message;

	printf("begin_ptr = %8p, and *begin_ptr = %c\n", begin_ptr, *begin_ptr);

	while(*end_ptr != '\0') {
		printf("end_ptr = %8p, and *end_ptr = %c\n", end_ptr, *end_ptr);
		end_ptr++;
		length++;
	}
	end_ptr--;
	printf("length = %d\n", length);

	printf("end_ptr = %8p, and *end_ptr = %c\n", end_ptr, *end_ptr);

	// Print address of begin_ptr and end_ptr
	printf("begin_ptr = %8p and end_ptr = %8p\n", begin_ptr, end_ptr);
 
 	for (c = 0; c < length / 2; c++) {
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;
 
		begin_ptr++;
		end_ptr--;
	}
}

int main()
{
	char message[101];

	printf("Please input charactor (maximum = 100 charactors): ");
	scanf("%s", message);

	// Reverse string
	reverse(message);

	printf("%s\n", message);

	return 0;
}