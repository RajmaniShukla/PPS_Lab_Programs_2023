#include <stdio.h>
#include <conio.h>

void swap(int* , int*);

int main(){
	int a, b;
	clrscr();
	printf("Enter Value of A:");
	scanf("%d",&a);
	printf("Enter Value of B:");
	scanf("%d",&b);
	printf("Before Swap:\nA = %d\nB = %d\n",a,b);
	swap(&a , &b);
	printf("After Swap:\nA = %d\nB = %d",a,b);
	getch();
	return 0;
}

void swap(int *x , int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}