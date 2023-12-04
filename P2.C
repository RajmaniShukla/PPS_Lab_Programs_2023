#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int p , r , t;
	float ci , si;
	clrscr();
	printf("Enter Principal Amount:");
	scanf("%d" , &p);
	printf("Enter Rate of Intrest:");
	scanf("%d" , &r);
	printf("Enter Time:");
	scanf("%d" , &t);
	si = p * r * t / 100.0;
	ci = p * pow((1 + r / 100.0) , t);
	printf("Simple Intrest: %.2f\n" , si);
	printf("Compound Intrest: %.2f" , ci - p);
	getch();
}