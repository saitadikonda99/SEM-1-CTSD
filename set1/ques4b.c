#include<stdio.h>
int main() {
	int a=65;
	int  k=120;
	
	a = a^k;
	k = a^k;
	a = a^k;
 printf(" a = %d\nk =%d\n", a , k);
	return 0;
}
