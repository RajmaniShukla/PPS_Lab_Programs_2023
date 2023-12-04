#include <stdio.h>
#include <conio.h>

int main(){
	int current = 1, previous = 1, next, num, i;
	printf("Enter a Number:");
	scanf("%d",&num);
	printf("%d %d",previous,current);
	for ( i = 0 ; i < num - 2 ; i++){
		next = current + previous;
		printf(" %d",next);
		previous = current;
		current = next;
	}
	getch();
	return 0;
}