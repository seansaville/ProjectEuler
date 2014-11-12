#include <stdio.h>

int palindrome(int num) {
	int digit = 0;
	int numarray[6]; // Maximum number generated (998001) has 6 digits
	
	// Fill an array with the digits of the given number
	while (num != 0) {
		numarray[digit] = num % 10;
		num /= 10;
		digit++;
	}

	int numdigits = digit - 1; // Total number of digits to count up to

	// Reverse the array and compare to see if the number is a palindrome
	int revarray[numdigits];

	for (digit = 0; digit <= numdigits; digit++) {
		revarray[digit] = numarray[numdigits - digit];
		if (!(revarray[digit] == numarray[digit])) {
			// The number isn't a palindrome, so we should return false
			return 0;
		}
	}

	// If we've gotten to this point, the number is a palindrome so return true
	return 1;
}

int main() {
	int i, j, n, largest = 0;
	
	for (i = 0; i <= 999; i++) 												{
		for (j = 0; j <= 999; j++) {
			n = i * j;
			if (palindrome(n) && (n > largest)) {
				largest = n;
			}
		}
	}

	printf("%d\n", largest);

	return 0;
}