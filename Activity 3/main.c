/*
	Clent Japhet Poledo
	2020-08317
	“Upon my honor, I have accomplished this laboratory exercise relying upon my own honest efforts without cheating.”
*/
#include <stdio.h>
#include <stdlib.h>

int m,n,c,i;

int main() {
	c = 0;
	
	while (1 == 1) {
		printf("Enter M (>1): ");
		scanf("%d", &m);
		if (m <= 1) break;
		printf("Enter N (>1): ");
		scanf("%d", &n);
		if (n <= 1) break;
		
		for(i = 1; i <= m; i++) {
			if (i % n == 0) {
				c++;
			}
		}
		
		if (c == 0) {
			printf("\nThere are no numbers from 1 to %d that are divisible by %d.", m, n);
		} else if (c == 1) {
			printf("\nThere is 1 number from 1 to %d that is divisible by %d.", m, n);
		} else {
			printf("\nThere are %d numbers from 1 to %d that are divisible by %d.", c, m, n);
		}
		break;
	}
	if (m <= 1 || n <= 1) printf("\nYou have entered an invalid input. Program will now terminate.");
	
	
	return 0;
}
