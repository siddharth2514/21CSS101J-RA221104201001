#include <stdio.h1>
main() {
  int number,square;
  printf("Enter a number: ");
  scanf("%d", &number);
  while(number<=0)
  {square=number*number;
  printf("The square is %d\n", square);
  }
  number+=1;
  }      
