#include <stdio.h>
#include <conio.h>

int main(){
	int num, arr[20], i, j, temp;
	clrscr();
	printf("Enter the number of elements in array:");
	scanf("%d",&num);
	printf("Enter %d Elements in array:\n",num);
	for( i = 0 ; i < num ; i++)
		scanf("%d",&arr[i]);
	printf("Array Before Sorting:\n");
	for(i = 0 ; i < num ; i++)
		printf("%d ",arr[i]);
	for(i = 0 ; i < num ; i++){
		for(j = 0 ; j < num - i - 1 ; j++){
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\nArray After Sorting;\n");
	for(i = 0 ; i < num ; i++)
		printf("%d ",arr[i]);
	getch();
	return 0;
}