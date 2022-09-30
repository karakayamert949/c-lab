#include <stdio.h>

int main()
{
    int j,num,i;
    printf("enter the number of square matrix");
    scanf("%i",&num);
    int a[num][num];
    for (i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            a[i][j]=0;
        }
    }
}