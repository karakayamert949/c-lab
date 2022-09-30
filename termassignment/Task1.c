#include <stdio.h>

#define	FAIL -2
#define N 100 
#define EMPTY -1

int Show_Menu();
int Insert(int A[], int ID);
int Find_ID(int A[], int ID);
void Show_All_IDs(int A[]);

int main()
{
    int A[N], i, ID, opt, index;
	
	for(i=0; i<N; i++)
		A[i] = EMPTY;
	
	do{
		opt = Show_Menu();  
        if(opt==1)
        {
            printf("Enter the ID to be stored: ");
            scanf("%i",&ID);
            Insert(A,ID);
        }
        if(opt==2)
        {
            printf("Enter the ID to be found: \n");
            scanf("%i",&ID);
            int findresult=Find_ID(A,ID);
            if(findresult==FAIL)
            {
                printf("There is no such person with the ID in the company.\n");
            }
            else
            {
                printf("ID %i has been found into index %i.\n",ID,findresult);
            }
        }
        if(opt==3)
        {
            Show_All_IDs(A);
        }
        if(opt!=1 && opt!=2 && opt!=3 && opt!=4)
        {
            printf("Invalid choice, you have to choose one of (1,2,3,4)\n");
            return 0;
        }
	}while(opt!=4);
    	
	return 0;
}

int Show_Menu()
{
    int choice;
    printf("###################### MENU ########################\n1--> Insert a new ID\n2--> Find an ID\n3--> Show all IDs\n4--> Exit\nSelect an option (1,2,3,4)\n");
    scanf("%i",&choice);
    return choice;
}

int Insert(int A[], int ID)
{
    int index=ID%100;
    if(A[index-1]==-1)
    {
        A[index-1]=ID;
        printf("The ID is inserted into the array.\n");
        return index-1;
    }
    else 
    {
        int i=0,j=0,k,check2=1,check3=1;
        while(A[index-1+i]!=-1 && index-1+i<N)
        {
            i++;
            if(A[index-1+i]==-1)
            {
                check2=0;
            }
        }
        if(index-1+i==100)
        {
            while (j<index-1 && A[j]!=-1)
            {
                j++;
                if(A[j]==-1)
                {
                    check3=0;
                }
            }
        }
        if(check2==0)
        {
            A[index-1+i]=ID;
            printf("The ID is inserted into the array.\n");
            return index+i;
        }
        if(check3==0)
        {
            A[j]=ID;
            printf("The ID is inserted into the array.\n");
            return j+1;
        }
        if(check2==1 && check3==1)
        {
            printf("The array is full.\n");
            return FAIL;
        }
    }
}

int Find_ID(int A[], int ID)
{
    int i=0, check=1,j=0;
    int index=ID%100;
    while(A[index-1+i]!=ID && index-1+i<100)
    {
        i++;
        if(A[index-1+i]==ID)
        {
            return index+i;
        }
    }
    if(index-1+i==100)
    {
        while (j<index-1 && A[j]!=ID)
        {
            j++;
            if(A[j]==ID)
            {
                return j+1;
            }
        }
    }
    else
    {
        return FAIL;
    }
}

void Show_All_IDs(int A[])
{
    printf("The list of IDs:\n");
    for(int i=0;i<N;i++)
    {
        if(A[i]!=-1)
        {
            printf("A[%i]=%i\n",i+1,A[i]);
        }
    }
}