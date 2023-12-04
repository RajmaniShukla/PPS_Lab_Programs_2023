#include <stdio.h>
#include <conio.h>

int main(){
	int num, i, even_sum = 0, odd_sum = 0;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&num);
	for (i = 1 ; i <= num ; i++){
		i % 2 == 0 ? (even_sum += i) : (odd_sum += i);
	printf("\n %d,%i",even_sum,i);
	}
	printf("Sum of Even number:%d\n",even_sum);
	printf("Sum of Odd Number:%d",odd_sum);
	getch();
	return 0;
}