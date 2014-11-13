#include "stdio.h"

int main() {
	long int sum_of_squares, square_of_sum, running_sum, difference = 0;
	int n = 100;

	running_sum = (n * (n + 1)) / 2;
	square_of_sum = running_sum * running_sum;
	sum_of_squares = (n * (n + 1) * (2*n + 1)) / 6;

	difference = square_of_sum - sum_of_squares;

	printf("%ld\n", difference);

	return 0;
}