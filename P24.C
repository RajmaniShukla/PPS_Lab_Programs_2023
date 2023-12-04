#include <stdio.h>
#include <conio.h>

int main(){
	int num, arr[20], i, find;
	clrscr();
	printf("Enter the number of elements in array:");
	scanf("%d",&num);
	printf("Enter %d Elements in array:\n",num);
	for( i = 0 ; i < num ; i++)
		scanf("%d",&arr[i]);
	printf("Enter number to find:");
	scanf("%d",&find);
	for(i = 0 ; i < num ; i++){
		if (arr[i] == find)
			break;
	}
	if(i == num)
		printf("Element %d Not Found!",find);
	else
		printf("Element %d found at Index %d",find,i);
	getch();
	return 0;
}