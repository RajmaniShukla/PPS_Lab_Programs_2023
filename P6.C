#include <stdio.h>
#include <conio.h>

int main(){
	int a , b;
	clrscr();
	printf("Enter first Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	if(a == b)
		printf("Both Numbers are Equal.");
	else
		printf("Both Numbers are Not Equal.");
	getch();
	return 0;
}