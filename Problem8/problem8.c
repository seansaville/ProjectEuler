#include "stdio.h"
#include "stdlib.h"

int main() {
	char bignum[1000];
	FILE *fp;

	fp = fopen("bignum.txt", "r");

	int i;
	for (i = 0; i < 1000; i++) {
		if (feof(fp)) {
			break;
		}
		bignum[i] = fgetc(fp); 
	}
	
	fclose(fp);

	int j = 0;
	long int largest = 0;
	long int product;

	// We loop up to i = 987 to prevent overflow, because this is the highest array
	// index that we can read 13 digits from (987, 988, ... 999) to prevent overflow.
	for (i = 0; i <= 987; i++) {
		product = 1;
		for (j = 0; j < 13; j++) {
			product *= (bignum[i + j] - '0');
		}
		if (product > largest) {
			largest = product;
		}
	}

	printf("%ld\n", largest);
	
	return 0;
}