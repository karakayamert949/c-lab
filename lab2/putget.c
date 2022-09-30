#include <stdio.h>

int main(void)
{
    int cd;

    printf("Bir karakter giriniz: ");
    cd = getchar();

    printf("Girilen karakter: ");
    putchar(cd);

    return 0;
}
