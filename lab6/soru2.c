#include <stdio.h>

float fatura(char tip, int metrekare);

int main()
{
    char t;
    int m;

    printf("Enter the type: ");
    scanf("%c",&t);
    getchar();
    printf("Enter the area: ");
    scanf("%i",&m);
    
    printf("Total fee: %f", fatura(t,m));

}

float fatura(char tip, int metrekare)
{
    float x;
    if (tip=='A'){
        x=42.5*metrekare+25.4*metrekare;
    }
    else if (tip=='B'){
        x=28.5*metrekare+25.4*metrekare;
    }
    else if (tip=='C'){
        x=19*metrekare+metrekare*25.4;
    }
    if (x>=1000){
        x=x*9/10;
    }
    return x;
}