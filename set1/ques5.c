#include<stdio.h>
int GCD( int , int);
int GCD( int n1 , int n2 ) {
	 int gcd = 0;
	 if ( n1== 0 && n2 == 0 ) 
		return -1;
	   else {
	for( int i=1;i<=n1 && i<=n2; i++ ) {
		if ( n1%i==0 && n2%i==0)
		    gcd = i;
		return gcd;
		}
	}
return 0 ;
}
int main() {
	int n1 , n2;
	printf("enter the number1: ");
	scanf("%d",&n1);
	printf("enter the number1: ");
        scanf("%d",&n1);
	int result=GCD( n1 , n2 );
  if ( result == -1 ) 
	  printf("values are zero\n");
	else 
	  printf("GCD is %d\n",result);
	return 0;
	}

