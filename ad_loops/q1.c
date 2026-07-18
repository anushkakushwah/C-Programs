//to check if the given numberis armstrong or not
#include<stdio.h>
void main(){
    int n, rem, cube=0;
    int real = n;
    printf("Enter the number to check:");
    scanf("%d", &n);
    while(n>0){
        rem = n%10;
        cube =cube + (rem*rem*rem);
        n = n/10;
    }
    if (cube==real){
        printf("Given number is armstrong.");
    }else{
        printf("Given number is not armstrong number.");
    }
}