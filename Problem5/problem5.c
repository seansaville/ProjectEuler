#include "stdio.h"

int main() {
	int done = 0;
	int i;
	int num = 0;

	while (!done) {
		num++;
		for (i = 1; i <= 20; i++) {
			if (num % i == 0) {
				done = 1;
			} else {
				done = 0;
				break;
			}
		}
	}

	printf("%d\n", num);

	return 0;
}