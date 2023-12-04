#include <stdio.h>
#include <conio.h>

int main(){
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if (year % 4 == 0)
		printf("Year %d is a Leap Year!.");
	else
		printf("Year %d is Not a Leap Year!.");
	getch();
	return 0;
}