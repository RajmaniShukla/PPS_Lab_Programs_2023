#include <stdio.h>
#include <conio.h>

int main(){
	int num , sum = 0;
	clrscr();
	printf("Emter a Number:");
	scanf("%d",&num);
	while (num){
		sum += num % 10;
		num /= 10;
	}
	printf("Sum of all digits is %d",sum);
	getch();
	return 0;
}