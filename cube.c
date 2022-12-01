//cube of a number 

#include<stdio.h>
#include<math.h>
int main() {
	float n;
	printf("enter the no.of values: ");
	scanf("%f",&n);
	for ( int i=1;i<=n;i++ ) {
		if( i%3==0 )
		printf( " %.f\n" , pow( i ,3 ) );
		}
		return 0;
		}

