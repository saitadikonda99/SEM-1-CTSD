#include<stdio.h>
void EvenOdd( int , int  );
void EvenOdd( int num1 , int num2 ) {
	int rem = num1/num2;
	 	if( rem % 2 == 0 ) 
	   		printf("Even number\n");
		     else 
			printf("Odd number\n");
			}

int main() {
	int num1,num2;
	printf("enter the number1 : ");
	scanf("%d",&num1);
        printf("enter the number2 : ");
        scanf("%d",&num2);
        EvenOdd( num1 , num2 );
	return 0;
	}

