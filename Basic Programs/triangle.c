// to calculate perimeter of triangle 
#include<stdio.h>
void main(){
	float a1,a2,a3, perimeter;
	printf("Enter the three sides of triangle:");
	scanf("%f %f %f",&a1, &a2, &a3);
	perimeter = a1+a2+a3;
	printf("The perimeter of the triangle is: %f",perimeter);
}
