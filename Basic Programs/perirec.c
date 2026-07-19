// to calculate perimeter of the rectangle
#include<stdio.h>
void main(){
	float l,w,perimeter;
	printf("Enter the length and width of rectangle:");
	scanf("%f %f", &l , &w);
	perimeter = 2*(l+w);
	printf("The perimeter of the reactangle is: %f",perimeter);
}
