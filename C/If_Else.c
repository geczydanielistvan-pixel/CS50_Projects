#include <stdio.h>

int main(void){
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if (number < 0){
		printf("%d is negative.\n", number);
		}
		printf("This is always executed.");
		
		return 0;
}
