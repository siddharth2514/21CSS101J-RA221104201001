#include <stdio.h>
main() {
  int myNum = 10;
  printf("Enter a number: ");
  scanf("%d", &myNum);
if (myNum > 0)
  printf("The value is a positive number.");
else if (myNum < 0)
  printf("The value is a negative number.");
else
  printf("The value is 0.");
}
