// to check whether the angles of triangles are valid
#include<stdio.h>
void main(){
    float angle1, angle2, angle3, valid;
    printf("Enter the angle1:");
    scanf("%f", &angle1);
    printf("Enter the angle2:");
    scanf("%f", &angle2);
    printf("Enter the angle3:");
    scanf("%f", &angle3);
    valid = angle1+angle2+angle3;
    if(valid==180.00){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }
}
