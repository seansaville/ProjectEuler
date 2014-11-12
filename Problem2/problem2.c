#include <stdio.h>

/* Function to generate the nth Fibonacci number
 * The first Fibonacci number is when n = 0
 */
int fibonacci(int n) {
	if (n == 0) {
		return 1;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int n;
	int i, total = 0;
	
	while (n <= 4000000) {
		n = fibonacci(i);
		if (n % 2 == 0) {
			total += n;
		}
		i++;
	}

	printf("%d\n", total);

	return 0;
}