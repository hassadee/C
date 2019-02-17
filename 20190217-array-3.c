#include<stdio.h>

int main() {
	int num[5], i, x = 0, y = 0, z = 0, r = 0;

	printf("Input 0 = End\n");

	for(i = 1; i <= 5; i++) {
		do {
			printf("Input Number %d (1 - 999) : ",i);
			scanf("%d", &num[r]);
			
			if (num[r]==0)
				break;
		} while ( (num[r] < 1) || (num[r] > 999) );

		if(num[r]==0)
			break;
		
		if( (num[r] > 0) && (num[r] < 10) ) {
		 	x++;
		}
		else if( (num[r] > 9) && (num[r] < 100) ) {
		 	y++;
		}
		else {
		 	z++;
		}

		r++;
	}

	printf("Results...\n");
	printf("Number (1-9)     = %d\n", x);
	printf("Number (10-99)   = %d\n", y);
	printf("Number (100-999) = %d\n", z);

	return 0;
}