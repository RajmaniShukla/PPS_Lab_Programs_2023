#include <stdio.h>
#include <conio.h>

int main(){
	int arr[20], i, num, sum = 0;
	printf("Enter the Number of element in array:");
	scanf("%d",&num);
	printf("Enter %d Element(s) in array:\n",num);
	for (i = 0 ; i < num ; i++)
		scanf("%d",&arr[i]);
	for (i = 0 ; i < num ; i++)
		sum += arr[i];
	printf("Sum of %d element(s) of array is: %d",num,sum);
	getch();
	return 0;
}