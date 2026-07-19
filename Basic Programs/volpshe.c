// to calculate volume of sphere
#include<stdio.h>
void main(){
	float r, volume;
	printf("Enter the radius of sphere:");
	scanf("%f",&r);
	volume = 1.33*3.14*r*r*r;
	printf("The volume of the sphere is: %f",volume);
}
