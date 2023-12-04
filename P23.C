#include <stdio.h>
#include <conio.h>

int main(){
	int num, arr[20], i, min, max;
	clrscr();
	printf("Enter number of elements:");
	scanf("%d",&num);
	printf("Enter %d Elements in array:\n");
	for (i = 0 ; i < num ; i++)
		scanf("%d",&arr[i]);
	min = arr[0];
	max = arr[0];
	for (i = 1 ; i < num ; i++){
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("Maximum: %d\nMinimum: %d",max,min);
	getch();
	return 0;
}