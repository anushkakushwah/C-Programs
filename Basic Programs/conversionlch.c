// conversion from upper case to lower case
#include<stdio.h>
void main(){
	char lch,ch;
	printf("Enter a lowerr case character of your choice:");
	scanf("%c", &lch);
	ch= lch-32;
	printf("Upper case conversion of your output: %c", ch);
}
