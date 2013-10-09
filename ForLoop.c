#include "stdio.h"

int main() {
	int i;
	int sum = 0;
	for(i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("Sum 1~100 is: %d\n", sum);

	return 0;
}
