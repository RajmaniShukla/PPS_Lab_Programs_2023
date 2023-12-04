#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&num);
	if(num % 2 == 0)
		printf("%d is Even.",num);
	else
		printf("%d is Odd.",num);
	getch();
	return 0;
}