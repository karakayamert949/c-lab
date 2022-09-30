#include <stdio.h>
#include <math.h>

int main()
{
    int keysum=0,remain,remain2,remain3,lengthtext=0,counter=0,arr[counter],temp[counter];
    long long enctext,enctext2,key,key2,key3;
    printf("Enter the encrypted text: \n");
    scanf("%lli",&enctext);
    getchar();
    enctext2=enctext;

    printf("Enter the key:\n");
    scanf("%lli",&key);
    key2=key;
    key3=key;
    while (0<key2)
    {
        remain=key2%10;
        if(remain!=2 && remain!=3)
        {
            printf("The key is not proper.");
            return 0;
        }
        key2/=10;
    }

    while (0<key)
    {
        remain2=key%10;
        keysum+=remain2;
        key/=10;
    }
    while (0<enctext)
    {
        enctext/=10;
        lengthtext++;
    }
    if(lengthtext!=keysum)
    {
        printf("the key and encrypted text are not compatible and cannot be resolved.");
        return 0;
    }
    while (0<key3)
    {
        remain3=key3%10;
        arr[counter]=enctext2%(long long)pow(10,remain3);
        key3/=10;
        enctext2/=pow(10,remain3);
        counter++;
    }
    
    for (int i=0;i<counter;i++)
    {
        temp[counter-i-1]=arr[i];
    }
    for (int i=0;i<counter;i++)
    {
        arr[i]=temp[i];
    }
    
    printf("Decrypted text is: ");
    for(int i=0; i<counter;i++)
    {
        printf("%c",arr[i]);
    }
}