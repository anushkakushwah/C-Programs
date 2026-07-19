//swapping without the third variable
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	a= a+b;
	b= a-b;
	a= a-b;
	printf("Value of a after swapping: %d\n",a);
	printf("Value of b after swapping: %d\n",b);
}
