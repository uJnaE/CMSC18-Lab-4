/*
	YEs
*/
#include <stdio.h>
#include <stdlib.h>

int a,b;

int main() {
	printf("Please input two numbers (separate the numbers with space): ");
	scanf("%d%d", &a, &b);
	
	if (a < 1 || b < 1) {
		printf("The numbers are %d and %d. One of the numbers or both is/are less than 1.", a, b);
	} else {
		if (a % 2 == 1 && b % 2 == 1) {
			printf("The sum of two ODD numbers %d and %d is %d, which is an EVEN number.", a, b,a+b);
		} else if (a % 2 == 0 && b % 2 == 0) {
			printf("The sum of two EVEN numbers %d and %d is %d, which is also an EVEN number.", a, b, a+b);
		} else if (a % 2 == 1 && b % 2 == 0) {
			printf("The sum of an even number %d and an odd number %d is %d, which is an odd number.", b, a, a+b);
		} else if (a % 2 == 0 && b % 2 == 1) {
			printf("The sum of an even number %d and an odd number %d is %d, which is an odd number.", a, b, a+b);
		}
	}
	
	return 0;
}
