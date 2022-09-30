#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void printer(int car_id[],int car_color[], int car_price[]);

int main()
{
    int id[SIZE]={1002,2176,3201,4204,5512,6309,8841,9004};
    int color[SIZE]={0,1,2,1,2,0,1,0};
    int price[SIZE]={24000, 18000,36000,26000,35000,29000,31000,38000};
    printer(id,color,price);
}

void printer(int car_id[],int car_color[],int car_price[])
{
    printf("ID numbers of the black cars that are priced under 30000 USD: \n");
    int i;
    for(i=0;i<8;i++)
    {
        if(car_color[i]==0 && car_price[i]<30000)
        {
            printf("%d\n",car_id[i]);
        }
        else
        {
            continue;
        }
    }
}