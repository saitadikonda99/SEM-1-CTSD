
#include<stdio.h>
int main() {
        int a,b,c;
        printf("enter the a: ");
        scanf("%d",&a);
        printf("enter the b: ");
        scanf("%d",&b);
        printf("enter the c: ");
        scanf("%d",&c);
if( a<b && a<c )
        printf("%d\n",a);
        else if( b<a && b<c )
        printf("%d\n",b);
         else
                printf("%d\n",c);
  return 0;
        }
