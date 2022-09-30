#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x, secx, y, secy;
	
	printf("Enter first point: ");
	scanf("(%c, %c)", &x, &y);
	getchar();
	printf("Enter second point: ");
	scanf("(%c, %c)", &secx, &secy);
	
	int distance = abs(x - secx) + abs(y - secy);
	
	printf("The distance between points (%c,%c) and (%c,%c) is %d",x,y,secx,secy,distance);
}

