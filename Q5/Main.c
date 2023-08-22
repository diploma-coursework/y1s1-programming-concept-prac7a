#include <stdio.h>

int main() {
	int num = 0;

	printf("Enter a number for multiplication table > ");
	scanf("%d", &num);

	for (int i = 1; i < 13; i++) {
		printf("\n%d x %2d = %d", num, i, num * i);
	}

	printf("\n");
}