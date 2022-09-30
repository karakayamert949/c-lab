#include <stdio.h>

int main()
{
	char firstc, secondc, thirdc;
	
	printf("Enter the first character: ");
	scanf("%c",&firstc);
	getchar();
	printf("Enter the second character: ");
	secondc=getchar();
	getchar();
	printf("Enter the third character: ");
	thirdc = getc(stdin);
	
	int x = secondc==(float)(firstc+thirdc)/2;
	printf("Is %c middle of the %c and %c : %d", secondc,firstc,thirdc,x);
}
