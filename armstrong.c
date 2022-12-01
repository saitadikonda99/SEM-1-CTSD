// Arm strong number

#include<stdio.h>
int main() {
	int n,temp,sum=0;
	printf("enter the number : ");
     	scanf("%d",&n);
	temp = n;
	while( n>0 ) {
		int k = n%10;
	        sum = sum+(k*k*k);
		n = n/10;
		}
   if( temp == sum )
		printf("given number is Armstrong number\n");
	else 
		printf("given not number is Armstrong number\n");
		return 0;
		}

