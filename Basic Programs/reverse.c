// reversing the digits of 3 digit number
#include<stdio.h>
void main(){
	int n,d1,d2,d3, n1;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	d1= n/100;
	d2= (n/10)%10;
	d3=n%10;
	n1= (d3*100 + d2*10 + d1*1);
	printf("Reversed digit is: %d",n1);
}
