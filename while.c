#include <stdio.h>

/**
*
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
  float cel, fahr;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  while (fahr <= upper)
  {
    cel = 5 * (fahr - 32) / 9;
    printf("%3.0f\t%6.2f\n", fahr, cel);
    fahr = fahr + step;
  }
}
