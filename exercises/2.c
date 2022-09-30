#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    int limit;
    printf("enter the length of the string");
    scanf("%i",&limit);
    getchar();
    text=calloc(limit,sizeof(char));
    if(text==NULL)
    {
        printf("error");
        return 1;
    }
    printf("enter the text");
    fgets(text,limit,stdin);
    printf("%s",text);

}