#include <stdio.h>
main(){
  int i, intsum;
  printf("i = ");
  scanf("%d", &i);
  char ch='a';
  float floatsum;
  intsum= ch+i;
  floatsum= i+ch;
  printf("Integer result= %d, Float result = %f\n", intsum,floatsum);
}
