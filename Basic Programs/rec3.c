//write a program to print the 
//table of number without return value.
#include<stdio.h>
void table(int n, int d)
{
	if(d<=10){
		printf("%d*%d=%d\n",n,d,n*d);
		table(n,d+1);
	}
}
void main(){
	int n,d;
	printf("Enter the value of n:");
	scanf("%d",&n);
	table(n,d);
}
