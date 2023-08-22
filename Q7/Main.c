#include <stdio.h>
#include <math.h>

/*
  i) Input = 3, Output = 333333
 ii) input = 7, Output = 77777777777777 
*/

int main() {
	int i, n, d;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n * 2; i++) {
		d = (n * 2 - 1) - abs(n - 1);
		printf("%d", d);
	}

	printf("\n");
}