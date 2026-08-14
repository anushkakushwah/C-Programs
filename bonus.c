//calculate emplyoee bonus based on the salary slabs
// //Salary ≤ 10,000 → Bonus = 10% of salary
// 10,001 – 20,000 → Bonus = 15% of salary
// 20,001 – 30,000 → Bonus = 20% of salary
// Above 30,000 → Bonus = 25% of salary
#include<stdio.h>
void main(){
    float salary,bonus;
    printf("Enter the salary of the person:");
    scanf("%f",&salary);
    if(salary<= 10000){
        bonus = (15.0/100.0)*salary;
        printf("Bonus given to this person is: %f",bonus);
    }else if(salary>=10001 && salary<=20000){
        bonus = (15.0/100.0)*salary;
        printf("Bonus given to this person is: %f",bonus);
    }else if(salary>=20001 && salary<=30000){
        bonus =(20.0/100.0)*salary;
    }else if(salary>30000){
        bonus = (25.0/100.0)*salary;
        printf("Bonus given to this person is: %f",bonus);
    }else{
        printf("Not eligible for bonus");
    }
}
