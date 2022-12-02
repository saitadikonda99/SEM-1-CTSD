#include<stdio.h>

int main() {
	int row,coloumn;
	printf("enter the row: " );
	scanf("%d",&row);
	printf("enter the column: ");
        scanf("%d",&coloumn);
	int a[row][coloumn];
	for( int k=0;k<row;k++ ) {
		 for( int c=0;c<coloumn;c++ ) {
		  printf("a[%d][%d] = ", k ,c );
		  scanf("%d" ,&a[k][c] );
		}
	}
printf("row : ");
for( int k=0;k<row;k++ ) {
                 for( int c=0;c<coloumn;c++ ) {
			if( k == 1 )
                  printf( "%d ",a[k][c]);
			}
}
printf("coloumn : ");
for( int k=0;k<row;k++ ) {
                 for( int c=0;c<coloumn;c++ ) {
			if ( c == 1) 
			printf("%d ",a[k][c]);
                }
        }

return 0;
}
