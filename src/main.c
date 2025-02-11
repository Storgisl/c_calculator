#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main() {
	char operator;
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf(" %c", &operator);
	float * pA = &a;
	float * pB = &b;
	char * pOperator = &operator;
	switch(operator) {
		case '+':
			printf("%.2f\n", add(*pA, b));
			break;
		case '-':
			printf("%.2f\n", subtract(a, *pB));
			break;
		case '/':
			printf("%.2f\n", divide(a, b));
			break;
		case '*':
			printf("%.2f\n", multiply(*pA, *pB));
			break;
		default:
			printf("Invalid operator!\n");
	}

	return 0;
}
