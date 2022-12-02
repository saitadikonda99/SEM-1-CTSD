// sum of +ve numbers

#include<stdio.h>

	int main() {
		 int arr[10],sum=0;
		 printf("Enter two digit numbers\n");
	     for( int i=0;i<10;i++ ) {
		 scanf("%d",&arr[i] );
		}
	  for(int i=0;i<10;i++ ) {
		if( arr[i]>0 ) {
			if( sum <= 999 )
			sum = sum + arr[i];
		    }
             }
 		printf("sum is %d\n",sum);
		return 0;
		}

