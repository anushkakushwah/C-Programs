// to calculate sum of first and last digit of a 4 number
#include<stdio.h>
void main(){
	int n, fd, ld, sum;
	
	printf("Enter the 4 digit number:");
	scanf("%d",&n);
	fd= n%10;
	ld= n/1000;
	sum= fd+ld;
	printf("The sum of last and first digit of num is: %d",sum);

}
