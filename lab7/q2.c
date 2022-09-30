#include <stdio.h>

int main()
{
    int size;
    printf("What is the size of the image? ");
    scanf("%i",&size);

    int A[size][size];

    printf("If the pixel forms the object enter 1, otherwise enter 0.\n");
    for(int row=0; row<size; row++)
    {
        for (int col=0; col<size; col++)
        {
            scanf("%i", &A[row][col]);
        }
    }

    printf("The image is :\n");
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            printf("%i  ",A[row][col]);
        }
        printf("\n");
    }

    int hist[size];
    for(int i=0;i<size;i++)   
    {
        hist[i]=0;
        for(int j=0;j<size;j++)
        {
            hist[i] += A[i][j];
        }
    }

    printf("The histogram matrix is: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",hist[i]);
    }

    int first=0, last=0;
    for(int i=0;i<size;i++)
    {
        if(first==0)
        {
            if(hist[i]!=0)
            {
                first=i;
            }
        }

        if(hist[i]!=0)
        {
            last=i;
        }
    }

    int is_symmetric=1;
    int count=last-first-1;
    for (int x=0; x<count; x++)
    {
        if (hist[first+x] != hist[last-x])
        {
            is_symmetric=0;
        }
    }

    if (is_symmetric)
    {
        printf("\nObject is symmetric.");
    }
    else
    {
        printf("\nObject is not symmetric.");
    }
}