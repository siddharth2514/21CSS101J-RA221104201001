#define period 10
#define Principal 500.0
#inlcude <stdio.h>
main() {
  int year;
  float amount,value,interest;
  amount=Principal;
  interest=0.11;
  year=0;
  while (year<= period)
  { printf("%2d %8.2f\n", year,amount);
   value=amount+interest*amount;
   year=year+1;
   amount=value;
  }
}
  
  
