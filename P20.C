#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int ch, dec = 0, i = 0;
	long int bin = 0;
	clrscr();
	printf("1. Decimal to Binary\n2. Binary to Decimal\n");
	printf("Enter Choise:");
	scanf("%d",&ch);
	if(ch == 1){
		printf("Enter a number in decimal: ");
		scanf("%d",&dec);
		while(dec){
			bin += (dec % 2) * pow(10,i++);
			dec /= 2;
		}
		printf("Binary Number: %ld" , bin);
	}
	else if (ch == 2){
		printf("Enter a Number in Binary: ");
		scanf("%ld",&bin);
		i = 0;
		while(bin){
			dec += (bin % 10) * pow(2,i++);
			bin /= 10;
		}
		printf("Decimal Number: %d" , dec);
	}
	else
		printf("Invalid Choise!");
	getch();
	return 0;
}