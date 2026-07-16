// to find out second largest number from the three numbers
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && a<c)|| (a>c && a<b)){
        printf("A is second greater.");
    }else if((b>c && b<a)|| (b>a && b<c)){
        printf("B is second greater");
    }else{
        printf("C is second greater");
    }
    }
    
