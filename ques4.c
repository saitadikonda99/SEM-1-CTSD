#include<stdio.h>
int main() {
	int row,coloumn,check=0;
	printf("enter the no.of rows: ");
	scanf("%d",&row);
	printf("enter the no.of coloumns: ");
	scanf("%d",&coloumn);
	int a[row][coloumn];
	for( int k=0;k<row;k++ ) {
		for( int s=0;s<coloumn;s++ ) {
			printf("a[%d][%d] = ", s , k );
			scanf("%d",&a[k][s]);
		}
	}
	   for( int k=0;k<row;k++ ) {
                for( int s=0;s<coloumn;s++ ) {
                        if ( a[k][s] != a[s][k]  )
				check =1;
                }
        }
	if( check == 1 )	
		printf(" not  symmetric matrix\n" );
	else 
		printf("symmetric matrix\n" );

return 0;
	}

