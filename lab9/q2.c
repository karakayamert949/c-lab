#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int search_asc(int *arr, int size,int el, int *itr);

int main()
{
    int arr_s=0;
    printf("Please enter the array size: ");
    scanf("%d", &arr_s);
    getchar();

    int *sorted;
    sorted=(int*)calloc(arr_s, sizeof(int));
    if(sorted==NULL)
    {
        printf("Not enough memory for allocation.\n");
        return 0;
    }

    int i,num;
    for(i=0;i<arr_s;i++)
    {
        printf("Please enter number %i: ",i+1);
        scanf("%d",&num);
        getchar();
        *(sorted+i)=num;
    }

    printf("\n Array: \n");
    for(i=0;i<arr_s;i++)
    {
        printf("%d\t", *(sorted+i));
    }

    int s_for=0;
    printf("\n\n The element you want to search for: ");
    scanf("%d",&s_for);
    getchar();

    int iteration=0;
    int result=search_asc(sorted,arr_s,s_for,&iteration);
    if(result !=-1)
    {
        printf("\n\n Element found at index: %d",result);
    }
    else
    {
        printf("\n\n Element not found.");
    }
    printf("\n Number of iterations: %d", iteration);

    free(sorted);
    return 0;
}

int search_asc(int *arr,int size, int el, int *itr)
{
    int idx= -1;
    int l_idx=0;
    int r_idx=size-1;
    int val,mid;

    do
    {
        *itr+=1;
        mid=(r_idx+l_idx)/2;
        val=*(arr+mid);
        idx = val == el ? mid : -1;
        printf("\n Looking at index: %d",mid);
        printf("Found value: %d", val);

        if(idx==-1)
        {
            if(el>val)
            {
                l_idx=mid+1;
            }
            else
            {
                r_idx=mid-1;
            }
        }
    } while(idx==-1 && *itr < size);
    return idx;
}