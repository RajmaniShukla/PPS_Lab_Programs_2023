#include <stdio.h>
#include <conio.h>

int main(){
	int num, arr1[20], arr2[20], sum_arr[20], i;
	printf("Enter number of element(s) in arrays:");
	scanf("%d",&num);
	printf("Enter %d element(s) in first array:\n",num);
	for (i = 0 ; i < num ; i++)
		scanf("%d",&arr1[i]);
	printf("Enter %d element(s) in Second array:\n",num);
	for (i = 0 ; i < num ; i++)
		scanf("%d",&arr2[i]);
	for (i = 0 ; i < num ; i++)
		sum_arr[i] = arr1[i] + arr2[i];
	printf("Sum of respective elements of array:\n");
	for (i = 0 ; i < num ; i++)
		printf("%d ",sum_arr[i]);
	getch();
	return 0;
}