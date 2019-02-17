#include<stdio.h>
#include<string.h>

int main()
{

	int i, j = 0;
	char s[5], ch;

	printf("Please input 5 characters\n");
	printf("(* to exit)\n");
	
	for(i = 0; i < 5; i++) {
		j++;
		scanf(" %c",&ch);

		if(ch=='*') {
			j--;
			break;
		} else {
			s[i] = ch;
		}
	}
	
	for(i = 0; i < j; i++)
		printf("n[%d] = %c\n", i, s[i]);

	return 0;
}
