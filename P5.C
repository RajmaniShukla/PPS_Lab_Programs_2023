#include <stdio.h>
#include <conio.h>

int main(){
	int a , b , temp;
	clrscr();
	printf("Enter A and B:");
	scanf("%d%d",&a,&b);
	printf("Before Swaping:\nA = %d\nB = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swaping:\nA = %d\nB = %d",a,b);
	getch();
	return 0;
}