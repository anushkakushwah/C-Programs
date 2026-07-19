//creating a program to find the area of rectangle.
//with arguments, no return value
#include<stdio.h>
void area(int,int);
void area(int l, int b){
	int area;
	area= l*b;
	printf("Area of the rectangle is:%d",area);
}
void main(){
	int l,w;
	printf("Enter the length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	area(l,b);
}

