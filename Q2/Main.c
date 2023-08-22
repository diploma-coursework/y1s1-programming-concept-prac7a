#include <stdio.h>

int main() {
	int input = 0, count = 0, sum = 0;

	printf("Enter a number > ");
	scanf("%d", &input);

	while (input != -999) {
		count++;
		sum += input;

		printf("Enter a number > ");
		scanf("%d", &input);
	}


	printf(
		"\n"
		"Count   : %d\n"
		"Sum     : %d\n"
		"Average : %.3f\n",
		count, sum, (double) sum / count
	);
}