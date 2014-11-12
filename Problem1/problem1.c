#include <stdio.h>

int main() {
	int num = 1000;
	int i; 
	int total = 0;

	for (i = 1; i < num; i++) {
		if (i % 15 == 0) {
			total += i;
		} else if (i % 3 == 0) {
			total += i;
		} else if (i % 5 == 0) {
			total += i;
		}
	}

	printf("%d\n", total);

	return 0;
}