#include <stdio.h>
#include <conio.h>

int main(){
	int num, i, fact = 1;
	printf("Enter a Number:");
	scanf("%d",&num);
	for ( i = 1 ; i <= num ; i++)
		fact *= i;
	printf("Factorial if %d is %d",num,fact);
	getch();
	return 0;
}