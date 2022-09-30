#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int function(char *str,char *substr);

int main()
{
    char *string,*substring;
    string=(char*)malloc(100*sizeof(char));
    if(string==NULL)
    {
        printf("cannot allocate memory");
        exit(0);
    }
    substring=(char*)malloc(100*sizeof(char));
    if(substring==NULL)
    {
        printf("cannot allocate memory");
        exit(0);
    }

    printf("enter a string\n");
    gets(string);
    getchar();
    printf("enter a substring\n");
    gets(substring);

    int a=function(string,substring);
    printf("%i",a);
}

int function(char *str,char *substr)
{
    int counter=0;
    int j=0;
    int substrLength=strlen(substr);
    for(int i=0;i<strlen(str);i++)
    {
        if(substr[j]==str[i])
        {
            for(j=0;j<substrLength;j++)
            {
                counter+=(str[i+j]==substr[j]);
                if(counter==substrLength)
                {
                    return i;
                }
                else if(counter!=substrLength && j==substrLength-1)
                {
                    j=0;
                    counter=0;
                    break;
                }
            }
        }
    }
    return -1;
}