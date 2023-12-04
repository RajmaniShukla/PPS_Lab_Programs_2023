#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main(){
	int r;
	float a,c;
	clrscr();
	printf("Enter Radius of circle:");
	scanf("%d",&r);
	a = PI * r * r;
	c = 2 * PI * r;
	printf("Area = %.2f\nCircumference = %.2f",a,c);
	getch();
	return 0;
}