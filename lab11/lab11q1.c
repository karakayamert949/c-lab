#include <stdio.h>

void encryption(char *s);

int main()
{
    FILE *words,*encwords;
    words=fopen("words.txt","r");
    encwords=fopen("encrypted.txt","w");
    if(words==NULL)
    {
        printf("can't open file %s",words);
        return 0;
    }
    if(encwords==NULL)
    {
        printf("cannot create file %s",encwords);
        return 0;
    }
    char buffer[300];
    while(fgets(buffer,300,words))
    {
        encryption(buffer);
        fprintf(encwords,"%s",buffer);
    }
    
    fclose(words);
    fclose(encwords);
}

void encryption(char *s)
{
    int i=0;
    while(s[i]!='\n')
    {
        if(s[i]=='z')
        {
            s[i]='a';
            i++;
        }
        else if(s[i]=='Z')
        {
            s[i]='A';
            i++;
        }
        else
        {
            s[i]+=1;
            i++;
        }
    }
}