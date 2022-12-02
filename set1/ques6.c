#include<stdio.h>
int Perfect( int n );
int Perfect( int n ) {
	int sum=0;
	for( int i=1;i<n;i++ ) {
		if( n%i==0 ) 
		 sum = sum + i;
		}
  if ( sum == n )
	printf("Perfect number\n");
	 else 
		printf("Not Perfect number\n");
	return 0;

}
int main() {
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	Perfect( n );
	return 0;
	}

