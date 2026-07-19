// functions using calll by address
//addition with args and no return vlue
#include<stdio.h>
void add(int*,int*); //address value int pointers
void add(int *a, int *b)//(1000,1004)
{
	int sum;
	//sum= a+b; // 1000+1004 so use *a=*b
	sum= *a+*b;
	printf("Sum of numbers is:%d",sum);
}

void main()
{
	int a,b;
	printf("Enter value of a and b:");
	scanf("%d%d",&a,&b);
	add(&a,&b); // call by address //add(1000,1004)	
}

