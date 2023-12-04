#include <stdio.h>
#include <conio.h>

int main(){
	float c,f;
	clrscr();
	printf("Enter Temperature in Centigrade:");
	scanf("%f",&c);
	f = (9 * c / 5) + 32;
	printf("Temperature in Fahrenheit:%.2f",f);
	getch();
	return 0;
}