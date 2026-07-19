//to calculate gross sal and net salary
#include<stdio.h>
void main(){
	float basic,gross,net;
	printf("Enter the basic salary of yours:");
	scanf("%f",&basic);
	const float ta = (10.0/100.0)*basic;
	const float da= (5.0/100.0)*basic;
	const float pf = (7.8/100)*basic;
	gross = basic+ ta+da;
	net = gross - pf;
	printf("Your gross salary is: %f",gross);
	printf("Your net salary is: %f",net);
}
