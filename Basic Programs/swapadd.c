#include<stdio.h>
void swap(int*,int*);
void swap(int *a, int *b)
{
	int temp,a,b;
	temp=*a;
	*a=*b; 
	*b=temp;
printf("Before swapping value of a in  function definition :%d\n",a);
printf("Before swapping value of b in  function definition:%d\n",b);
}
void main()
{
  int &a,&b;
  printf("Enter the value of a and b:");
  scanf("%d%d", &a,&b);
  printf("Before swapping value of a in main function:%d\n",a);
  printf("Before swapping value of b in main function:%d\n",b);
}
