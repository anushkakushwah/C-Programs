//LOGICAL IMPLEMENTATION
// SWAPINING THE TWO VARIABLE WITH THE HELP OF THIRD variable
// Code optimized
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the values of a and b:");
	scanf("%d %d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("Swapped values of a is: %d\n",a);
	printf("Swapped value of b is: %d\n",b);	
}
