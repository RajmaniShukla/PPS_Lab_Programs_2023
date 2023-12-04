#include <stdio.h>
#include <conio.h>

int main(){
	int m, n, mat[10][10], i, j, sum = 0;
	clrscr();
	printf("Enter order of Matrix (m,n):");
	scanf("%d%d",&m,&n);
	printf("Enter Matrix:\n");
	for(i = 0 ; i < m ; i++){
		printf("Enter Row Number %d of Matrix",i + 1);
		for(j = 0 ; j < n ; j++)
			scanf("%d",&mat[i][j]);
	}
	for(i = 0 ; i < (n < m ? n : m) ; i++)
		sum += mat[i][i];
	printf("Sum of Diagonal elements: %d",sum);
	getch();
	return 0;
}