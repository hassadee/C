#include <stdio.h>

int main()
{
	float i = 5, *ptr;
	ptr = &i;

	printf("i = %8f, and sizeof i = %d\n", i, sizeof(i));
	printf("&i = %8p, and sizeof &i = %d\n", &i, sizeof(&i));
	printf("ptr = %8p, and sizeof ptr = %d\n", ptr, sizeof(ptr));
	printf("*ptr = %8f, and sizeof *ptr = %d\n", *ptr, sizeof(*ptr));
	printf("&ptr = %8p, and sizeof &ptr = %d\n", &ptr, sizeof(&ptr));
	printf("*&ptr = %8p, and sizeof *&ptr = %d\n", *&ptr, sizeof(*&ptr));

	return 0;
}