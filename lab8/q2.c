#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    printf("Enter a non negative integer: ");
    scanf("%d", &n);
    getchar();

    printf("Enter a positive integer: ");
    scanf("%d", &k);
    
    int *bonacci;
    bonacci= (int*)calloc(n,sizeof(int));
    if (bonacci == NULL)
    {
        printf("Cannot allocate memory");
        return 0;
    }
    bonacci[k-1]=1;
    int i,j;

    for (i=k;i<n;i++)
    {
        for (j=i-k; j<i; j++)
        {
            bonacci[i]+=bonacci[j];
        }
        printf("bonacci[%d] is %d\n",i,bonacci[i]);
    }
    printf("%d. element of the %d-bonacci sequence is %d",n,k,bonacci[n-1]);
    free(bonacci);
    return 0;
}