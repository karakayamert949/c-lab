#include <stdio.h>

int main()
{
    FILE *students=fopen("students.txt","r");
    if(students==NULL)
    {
        printf("cannot open file %s",students);
        return 0;
    }
    FILE *result=fopen("result.txt","w");
    if(result==NULL)
    {
        printf("cannot create file %s",result);
        return 0;
    }

    char name[24],surname[24];
    float avclass,studentscoresum=0;
    int midterm,homework,final,numstudent=0;
    while(fscanf(students,"%s %s %i %i %i",name,surname,&midterm,&homework,&final)==5)
    {
        numstudent++;
        studentscoresum+=midterm*0.3+homework*0.3+final*0.4;
    }
    avclass=studentscoresum/numstudent;
    rewind(students);

    float studentscore;
    int pass=0,fail=0;
    while(fscanf(students,"%s %s %i %i %i",name,surname,&midterm,&homework,&final)==5)
    {
        studentscore=midterm*0.3+homework*0.3+final*0.4;
        if(studentscore>avclass)
        {
            pass++;
            fprintf(result,"%s %s, score: %f, Passed\n",name,surname,studentscore);
        }
        else 
        {
            fail++;
            fprintf(result,"%s %s, score: %f, Failed\n",name,surname,studentscore);
        }
    }
    fprintf(result,"Class average: %f, Passed number: %i, Failed number: %i",avclass,pass,fail);
}

