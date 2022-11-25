#include<stdio.h>
main()
{   
    float cm, m;
    printf("Enter length in m: ");
    scanf("%f", &m);
    cm= m*100;
    printf("Equivalent length in cm = %fcm", cm);
}
