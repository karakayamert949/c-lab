#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int*ptr;

    ptr=(int*)malloc(n*sizeof(int));
    if(ptr== NULL)
    {
        printf("cannot allocate memory");
        return 0;
    }

    int i;
    for(i=0; i<n;i++)
    {
        if(i%2==0)
        {
            *(ptr+i)=(19*i + 73)%100;
        }
        else
        {
            *(ptr+i)=(13*i+94)%100;
        }
    }

    float sum1;
    for(i=0;i<n;i++)
    {
        sum1 += *(ptr+i);
    }
    float avfirst=sum1/n;
    printf("The average of the first array is %f\n",avfirst);

    ptr=(int*)realloc(ptr,2*n*sizeof(int));
    for (i=n; i<2*n;i++)
    {
        if(i%2==0)
        {
            *(ptr+i)=(7*i+119)%100;
        }
        else
        {
            *(ptr+i)=(11*i+29)%100;
        }
    }

    float sum2;
    for(i=0;i<2*n;i++)
    {
        sum2 +=*(ptr+i);
    }

    float avExpanded=sum2 /(2*n);

    printf("The average of the expanded array is %f\n",avExpanded);

    if (avExpanded<avfirst)
    {
        printf("Array has maximum average before expanded");
    }
    else if(avExpanded>avfirst)
    {
        printf("Array has maximum average after expanded");
    }
    
    free(ptr);
    return 0;
}
