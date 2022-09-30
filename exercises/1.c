#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,*ptr;

    printf("enter the number of elements ");
    scanf("%i",&num);
    ptr=(int*)malloc(num*sizeof(int));
    if (ptr==NULL)
    {
        printf("error");
        return 1;
    }

    printf("enter the elements ");
    for (int i=0;i<num;i++)
    {
        scanf("%i",ptr+i);
    }   

    int sum=0;
    for (int i=0;i<num;i++)
    {
        sum+=*(ptr+i);
    }
    for(int i=0;i<num;i++)
    {
        printf("%i  ",*(ptr+i));
    }
    printf("\n%i",sum);
    free(ptr);
}