#include <stdio.h>  
main() { 
int n, reverse=0, reminder;
           
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    {
     reminder=n%10;    
     reverse=reverse*10+reminder;    
     n/=10;    
  }    
printf("Reversed Number: %d",reverse);     
} 

