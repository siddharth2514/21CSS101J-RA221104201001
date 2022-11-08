#define period 10
#define Principal 500.0
#include <stdio.h>
main() {
  int years;
  float amount,value,interest;
  amount=Principal;
  interest=0.11;
  years=0;
  while (years<= period)
  { printf("%2d %8.2f\n", years,amount);
   value=amount+interest*amount;
   years=years+1;
   amount=value;
  }
}
