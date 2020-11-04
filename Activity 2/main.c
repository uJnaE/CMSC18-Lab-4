/*
	Clent Japhet Poledo
	2020-08317
	“Upon my honor, I have accomplished this laboratory exercise relying upon my own honest efforts without cheating.”
*/
#include <stdio.h>
#include <stdlib.h>

float num1, num2;
int a;

int main() {
	printf("Enter 1st num: ");
	scanf("%f", &num1);
	printf("Enter 2nd num: ");
	scanf("%f", &num2);
	printf("\nChoose operation:\n");
	printf("[1] Addition\n");
	printf("[2] Subtraction\n");
	printf("[3] Multiplication\n");
	printf("[4] Division\n");
	printf("Choice: ");
	scanf("%d", &a);
	printf("\n");
	
	if (a == 1) {
		printf("Result of adding %.2f and %.2f is %.2f.", num1, num2, num1 + num2);
	} else if (a == 2) {
		printf("Result of subtracting %.2f and %.2f is %.2f.", num1, num2, num1 - num2);
	} else if (a == 3) {
		printf("Result of multiplying %.2f and %.2f is %.2f.", num1, num2, num1 * num2);
	} else if (a == 4) {
		if (num2 == 0) {
			printf("Result is undefined - division by 0 is encountered!");
		} else {
			printf("Result of dividing %.2f by %.2f is %.2f.", num1, num2, num1 / num2);
		}
	} else {
		printf("Invalid choice!");
	}
	
	return 0;
}
