#include<stdio.h>
void main(){
    int a=10, *p, **q, ***r;
	printf("Value of a=%d\n",a);
	printf("Address of A=%u\n",&a);
	p=&a; // to store address, u can't assign normal value to pointer.
	printf("value of p=%u\n",p);
	//to get value of a using pointer p
	printf("value of a using p=%d\n",*p);  //called value at address operator *
	printf("address of p=%u\n",&p);
	q=&p;
	printf("value of q=%u\n",q);
	printf("value of p using pointer=%u\n",*q);
	printf("value of a=%d\n",**q); //using pointer q
	printf("address of q = %u\n",&q);
	r=&q;
	printf("Value of r=%u\n",r);
	printf("Value of q using pointer = %u\n",*r);
	printf("Value of p using pointer = %u\n",**r);
	printf("Value of a pointer q = %d\n",***r);
}

