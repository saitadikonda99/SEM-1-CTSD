#include<stdio.h>
int ADD( float* , float* );
int ADD( float *ptr1 , float *ptr2 ) {
         float sum = *ptr1 + *ptr2;
	 printf("%.2f\n",sum);
	 return 0;
	}
int main() {
	float a,b;
	printf("enter the a: ");
	scanf("%f",&a);
	printf("enter the b: ");
        scanf("%f",&b);
        ADD( &a , &b );
	return 0;
}
