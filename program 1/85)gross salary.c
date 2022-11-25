#include<stdio.h>
main()
{   
    float basic_salary, bonus, gross_salary;
    printf("Enter basic salary ");
    scanf("%f", &basic_salary);
    bonus = (basic_salary*20)/100;
    gross_salary = bonus + basic_salary;
    printf("\nBonus = %f", bonus);
    printf("\nGross salary = %f", gross_salary);

}
