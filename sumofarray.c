#include<stdio.h>
#include<stdlib.h>

int sum( int , int[] );
int sum( int n , int arr[] ) {
	 int i=0,sum1=0;
	 while( i<n ) {
		sum1 = arr[i]+sum1;
		i++;
		}
	return sum1;
}

int main() {
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for( int i=0;i<n;i++ ) {
		 printf("arr[%d] = " , i );
		 scanf("%d",&arr[i] );
		}
  int result=sum( n , arr );
      printf("sum of the array is : %d\n" ,result);

		return 0;
}

