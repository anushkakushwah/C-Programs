// to convert celcius into fahrenheit
#include<stdio.h>
void main(){
	float cel,farh;
	printf("Enter the temperature in fahrenheit:");
	scanf("%f",&farh);
	cel = (farh-32)*(5.0/9.0);
	printf("The temperature in celcius is: %f",cel);
}
