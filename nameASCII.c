#include<stdio.h>
void value( char[] , int );
void value( char name[] , int len ) {
	
	 for (  int i=0; i< len ; i++ ) 
		printf("%d\n", name[i]);
}		

void main() {
	char name[99];
	int len=0;
	printf("enter the name: ");
	scanf("%[^\n]",name);
	for( int i=0;name[i]!='\0';i++ )
	len++;
	value( name , len  );
 	} 
