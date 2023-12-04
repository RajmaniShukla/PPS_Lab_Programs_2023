#include <stdio.h>
#include <conio.h>

int main(){
	int sub[5], i, sum = 0;
	float per;
	for (i = 0 ; i < 5 ; i++){
		printf("Enter Markes of Subject %d: ",i + 1);
		scanf("%d",&sub[i]);
		sum += sub[i];
	}
	per = sum * 100.0 / 500.0;
	printf("Percentage = %g Grade ",per);
	if (per >= 90.0)
		printf("A");
	else if (per >= 80.0)
		printf("B");
	else if (per >= 60.0)
		printf("C");
	else
		printf("D");
	getch();
	return 0;
}