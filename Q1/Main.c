#include <stdio.h>

int main() {
	int n;

	do {
		printf("Enter a number > ");
		scanf("%d", &n);

		printf("Number: %d, Cube: %d\n", n, n * n * n);
	} while (n != -999);
}