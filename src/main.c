#include<stdio.h>

#include "../include/calculator.h"
#include "./add.c"
#include "./subtract.c"
#include "./divide.c"
#include "./multiply.c"

void main(){
	printf("\nC calculator\n");
	
	printf("\nchoose an operation from the menu\n");
	
	char operation;
	
	printf("\n Add + \n Subtract -\n Multiply *\n Divide /\n\nEnter operation:");
	scanf("%c", &operation);
	
	int a, b;
	
	printf("\nEnter number a:");
	scanf("%d",&a);
	
	printf("Enter number b:");
	scanf("%d", &b);
	
	int result = 0;

#ifdef luke	
	switch(operation){
		case '+':
			result = add(a,b);
			break;
		
		case '-':
			result = subtract(a,b);
			break;
			
		case '*':
			result = multiply(a,b);
			break;
			
		case '/':
			result = divide(a,b);
			break;
			
		default:
			printf("\nInvalid operation\n");
	}
	
#endif
	
	printf("\nThe result of the operation is %d\n", result);
	
}
