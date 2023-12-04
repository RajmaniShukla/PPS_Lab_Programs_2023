#include <stdio.h>
#include <conio.h>

int main(){
	int sum = 0, i, num;
	printf("Enter a number:");
	scanf("%d",&num);
	for (i = 1 ; i <= num ; i++)
		sum += i;
	printf("Sum of all Numbers till %d is %d.",num,sum);

	getch();
	return 0;
}