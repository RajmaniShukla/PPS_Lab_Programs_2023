#include <stdio.h>
#include <conio.h>

int main(){
	int num, i;
	clrscr();
	printf("Enter a Number N:");
	scanf("%d",&num);
	for (i = 2 ; i < num / 2 ; i++){
		if (num % i)
			continue;
		else
			printf("%d is Not a Prime Number!",num);
			break;
	}
	if(num % i)
		printf("%d is a Prime Number!",num);
	getch();
	return 0;
}