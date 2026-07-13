// finding the smallest of three numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a<c && a<b){
        printf("A is smaller");
    }else if(b<a && b<c){
        printf("B is smaller");
    }else{
        printf("C is smaller");
    }

}