#include <stdio.h>
#include <conio.h>

int main(){
	int num, rev = 0;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&num);
	while(num){
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	printf("Reverse Number is %d",rev);
	getch();
	return 0;
}