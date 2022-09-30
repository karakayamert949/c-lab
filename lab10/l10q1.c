#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void converter(char *istr);
void find_Capitals(char *str, char *cap);

int main()
{
    char *str1,*strcap;
    str1=(char*)malloc(100*sizeof(char));
    if(str1==NULL)
    {
        printf("Error cannot allocate memory");
        exit(0);
    }
    strcap=(char*)malloc(100*sizeof(char));
    if(strcap==NULL)
    {
        printf("Error cannot allocate memory");
        exit(0);
    }

    printf("enter a string\n");
    gets(str1);
    find_Capitals(str1,strcap);
    printf("Capital characters are: %s\n",strcap);
    converter(str1);
    printf("Lowercase version of the string: %s",str1);
    
    free(str1);
    free(strcap);
}

void converter(char *istr)
{
    for(int i=0;i<strlen(istr);i++)
    {
        if(istr[i]>=65 && istr[i]<=90)
        {
            istr[i]+=32;
        }
    }
}

void find_Capitals(char *str, char *cap)
{
    int j=0;
    for (int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            cap[j]=str[i];
            j++;
        }
    }
}