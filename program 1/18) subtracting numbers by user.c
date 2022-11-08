#include <stdio.h>
main() {
  int num1,num2,result;
  printf("Enter two numbers: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  result= num1-num2;
  printf("The difference is: %d", result);
}
