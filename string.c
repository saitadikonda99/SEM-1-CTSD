#include<stdio.h>
int main() {
	char name[99];
	int len=0;
	printf("enter the name: ");
	scanf("%[^\n]",name);
	for( int i=0;name[i]!='\0';i++ ) 
	len++;

	for( int i=0;i<len;i++ ) {
		if( name[i] == 'a' ||name[i] == 'e' ||name[i] == 'i' ||name[i] == 'o' 
||name[i] == 'u' ) {
		for( int s=i;s<len;s++ ) 
			name[s] = name[s+1];
			len--;	
}
   }

printf("%s\n",name);
return 0;
}

