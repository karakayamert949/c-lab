#include <stdio.h>

int main()
{
    int size;
    printf("What is the size of the square matrix? ");
    scanf("%i",&size);

    int A[size][size];
    int B[size][size];

    printf("Enter the elements of the matrix: \n");
    for(int row=0; row<size; row++)
    {
        for (int col=0; col<size; col++)
        {
            scanf("%i", &A[row][col]);
        }
    }

    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            B[row][col]=A[col][row];
        }
    }

    printf("The matrix is :\n");
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            printf("%i  ",A[row][col]);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is :\n");
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            printf("%i  ",B[row][col]);
        }
        printf("\n");
    }

    int isSymmetric = 1;
    for(int row=0; row<size && isSymmetric; row++)
    {
        for(int col=0; col<size && isSymmetric; col++)
        {
            /* If matrix A is not equal to its transpose */
            if(A[row][col] != B[row][col])
            {
                isSymmetric = 0;
            }
        }
    }

    /*
     * If the given matrix is symmetric.
     */
    if(isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }
}