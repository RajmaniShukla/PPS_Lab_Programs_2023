#include <stdio.h>
#include <conio.h>

int main(){
	int n, m1[10][10], m2[10][10], i, j, k, sum[10][10], ele, mul[10][10];
	clrscr();
	printf("Enter order n of matrix");
	scanf("%d",&n);
	printf("Enter First Matrix of order %d x %d:\n",n,n);
	for(i = 0 ; i < n ; i++){
		printf("Enter row Number %d of first matrix:",i + 1);
		for(j = 0 ; j < n ; j++)
			scanf("%d",&m1[i][j]);
	}
	for(i = 0 ; i < n ; i++){
		printf("Enter row Number %d of Second matrix:",i + 1);
		for(j = 0 ; j < n ; j++)
			scanf("%d",&m2[i][j]);
	}
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
			sum[i][j] = m1[i][j] + m2[i][j];
	printf("Addition of Matrix 1 and Matrix 2:\n");
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++){
			ele = 0;
			for(k = 0 ; k < n ; k++){
				ele += m1[i][k] * m2[k][j];
			}
			mul[i][j] = ele;
		}
	}
	printf("Multiplication of Martix 1 and Matrix 2:\n");
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++)
			printf("%d ",mul[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}