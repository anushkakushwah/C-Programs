// to convert celcius into fahrenheit
#include<stdio.h>
void main(){
	float cel,farh;
	printf("Enter the temperature in celcius:");
	scanf("%f",&cel);
	farh = (cel*9.0/5.0)+32;
	printf("The temperature in fahrenheit is: %f",farh);
}
