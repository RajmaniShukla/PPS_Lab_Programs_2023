#include <stdio.h>
#include <conio.h>
int main(){
	int sub[5],i,sum=0;
	float per;
	for(i = 0 ; i < 5 ; i++){
		printf("Enter Marks of subject %d:",i+1);
		scanf("%d",&sub[i]);
		sum += sub[i];
	}
	per = sum * 100/500.0;
	printf("Obtain marks = %d\nPercentage = %.2f",sum,per);
	getch();
	return 0;
}