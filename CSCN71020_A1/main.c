#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();

void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		return 0;
	case 2:
		subtract();
		return 0;
	}
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:\n");
	scanf_s("%lf", &num1);
	printf("Enter the second value:\n");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double numOne, numTwo, outcome;
	printf("Enter the first value:");
	scanf_s("%lf", &numOne);
	printf("Enter the second value:");
	scanf_s("%lf", &numTwo);
	outcome = numOne - numTwo;
	printf("%lf - %lf = %lf\n", numOne, numTwo, outcome);
}