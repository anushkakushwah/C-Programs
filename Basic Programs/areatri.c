//write a program to calculate the area of triangle
#include<stdio.h>
void main(){
	float b,h,area;
	printf("Enter the base and height of the triangle:");
	scanf("%f %f", &b,&h);
	area = 0.5*b*h;
	printf("Area of the triangle is: %f", area);
}
