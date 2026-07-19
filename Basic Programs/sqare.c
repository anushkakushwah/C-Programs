// to calculate perimeter and area of square 
#include<stdio.h>
void main(){
	float side, area, perimeter;
	printf("Enter the side of square:");
	scanf("%f",&side);
	perimeter = 4*side;
	area = side*side;
	printf("The perimeter of the square is: %f",perimeter);
	printf("The area of the square is: %f",area);
}
