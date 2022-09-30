#include <stdio.h>

float carpi(float);

int main()
{
  float x=5.3;
  x=carpi(x);
  printf("%f", x);
}

float carpi(float a)
{
   a=a*10;
   return a;
}