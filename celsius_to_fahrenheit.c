#include <stdio.h>
#include <stdlib.h>

int main()
{
  float celsius; // We can use "double" instead of "float" if using Code::Blocks
  float fahrenheit_result;
  printf("This program can convert Celsius (C) to Fahrenheit (F)!\n");
  printf("Enter the current degrees: \n");
  scanf("%f", &celsius);
  fahrenheit_result=(float)celsius*1.8+32;
  printf("The current degrees in fahrenheit is %f", fahrenheit_result);
  return 0;
}
