// to implement a calculator using if if else if
//creating a arithmetic calculator using c
// arithmetic calculation for simple 4 mathematical operations
#include<stdio.h>
void main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    int sum,sub,mul,div,mod;

    char operation;
    printf("Enter the operation to perform(a/s/m/d/y for mod):");
    scanf(" %c",&operation);
    if(operation== 'a'){
        sum = a+b;
        printf("Sum of the numbers is:%d",sum);
    }else if(operation=='s'){
        sub=a-b;
        printf("Subtraction of the numbers is:%d",sub);
    }else if(operation == 'm'){
        mul = a*b;
        printf("Multiplication of the numbers in: %d",mul);
    }else if(operation == 'd'){
        div = a/b;
        printf("Division of the numbers is:%d", div);
    }else if(operation =='y'){
        mod = a%b;
        printf("Modulus of the two numbers in: %d",mod);
    }else{
        printf("Wrong operation is asked to perform");
    }

}
