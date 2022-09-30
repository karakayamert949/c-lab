#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[30];
    int roll;
    float percentage;
}student;

int main()
{
    student *pstd;
    int num;
    printf("enter the number of students: ");
    scanf("%i",&num);
    pstd=malloc(num*sizeof(student));
    if(pstd==NULL)
    {
        printf("error");
        return 1;
    }
    for (int i=0;i<num;i++)
    {
        printf("\nenter the detail of the student [%i]\n",i+1);
        printf("enter the name of the student: ");
        scanf("%s",&(pstd+i)->name);
        printf("enter roll number: ");
        scanf("%i",&(pstd+i)->roll);
        printf("enter the percentage: ");
        scanf("%f",&(pstd+i)->percentage);
    }
    printf("entered details are: \n");
    for(int i=0;i<num;i++)
    {
        printf("%s\t%i\t%f\t",(pstd+i)->name,(pstd+i)->roll,(pstd+i)->percentage);
    }
}