#include <stdio.h>
#include <stdlib.h>

//A program that allows user to input the digit and mathematical operand in order to print the mathematical table from 0 - 20//

int main(void) 
{
  double digit;
  double j;
  char operand;

  printf("Please enter the mathematical Operation (+, *, -, /):\t");
  scanf("%c", &operand);
  
  printf("Please input your digit:\t");
  scanf("%lf", &digit);

  for (j = 1.0; j <= 20.0; j++)

    if (operand == '+')
      printf("%1.lf + %1.lf = %1.lf\n", digit, j, digit + j);

  else if (operand == '-')
          printf("%1.lf - %1.lf = %1.lf\n", digit, j, digit - j);

  else if (operand == '*')
          printf("%1.lf x %1.lf = %1.lf\n", digit, j, digit * j);

  else if (operand == '/')
          printf("%1.lf / %1.lf = %1.lf\n", digit, j, digit / j);

  else
    printf("Invalid operand\n");

  printf("\n\nEnd of Program\n");
  sleep(10);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}