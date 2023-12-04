#include <stdio.h>
#include <conio.h>

int main(){
	int i, num, rev = 0;
	clrscr();
	printf("Armstrong Numbers between 1 to 100:");
	for(i = 1 ; i <= 100 ; i++){
		num = i;
		rev = 0;
		while(num){
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		if (i == rev)
			printf("Armstrong Number: %d\n",rev);
	}
	getch();
	return 0;
}