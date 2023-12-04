#include <stdio.h>
#include <conio.h>

int main(){
	float num1, num2, result;
	char op;
	printf("Enter two Operands:");
	scanf("%f%f",&num1,&num2);
	printf("Enter operator:");
	scanf(" %c",&op);
	switch (op){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("Invalid operator!\n");
			getch();
			exit(0);
	}
	printf("Result is %g",result);
	getch();
	return 0;
}