// volume of the sphere is 4/3 πr^3

#include<stdio.h>
#include<math.h>
	 int main() {
		int r;
		float volume;
		printf("enter the radius : ");		
		scanf("%d",&r );
		volume = (4/3.0)*3.14*r*r*r;
		printf("volume of the sphere is : %f\n",volume );
		return 0;
		}
	
