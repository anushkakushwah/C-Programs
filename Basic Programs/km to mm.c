// to convert distanc from km to m
#include<stdio.h>
void main(){
	float kilodis, milidis;
	printf("Enter the distance in kms:");
	scanf("%f",&kilodis);
	milidis = kilodis*1000000;
	printf("The distance in mm is:%0.2f", milidis);
}
