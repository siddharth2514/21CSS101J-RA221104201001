#include<stdio.h>
main()
{   
    float kg, g;
    printf("Enter weight in gram: ");
    scanf("%f", &g);
    kg = g/1000;
    printf("Equivalent weight in kilogram = %f", kg);
}
