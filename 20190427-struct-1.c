/*
* Basic C Struct (1) - Weather.
* Input 4 values and make a decision that that day user should go out or not.
*/

#include <stdio.h>
#include <string.h>

struct Weather {
	char outlook[9];
	int temparature;
	int humidity;
	char wind;
};

void playing_decision(struct Weather w);

void playing_decision(struct Weather w)
{
	printf("\n");
	if (strcmp("overcast", w.outlook) == 0) {
		printf("Yes");
	}

	if (strcmp("sunny", w.outlook) == 0) {
		if (w.humidity > 77.5) {
			printf("No");
		} else {
			printf("Yes");
		}
	}

	if (strcmp("rain", w.outlook) == 0) {
		if (w.wind == 'T') {
			printf("No");
		} else {
			printf("Yes");
		}
	}
}

int main()
{
	int n;
	int i = 0;

	printf("Input how many day you want me to help you decide: ");
	scanf("%d", &n);

	struct Weather w[n];

	for (i = 0; i < n; i++) {
		scanf("%s %d %d %c", w[i].outlook, &w[i].temparature, &w[i].humidity, &w[i].wind);
	}

	for (i = 0; i < n; i++) {
		playing_decision(w[i]);
	}

	return 0;
}