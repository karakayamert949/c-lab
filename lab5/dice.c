#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dice();

int main()
{
     int result=dice();
     printf("the sum is %i",result);
}

int dice()
{
     srand(time(0));
     int x=(rand() %6) + 1;
     printf("first dice is %i\n",x);
     int y=(rand() %6) + 1;
     printf("second dice is %i\n",y);
     return x+y;
}