#include <stdio.h>

int main()
{
	int first_var, second_var;
	printf("Enter two integers:");
	scanf("%d %d", &first_var, &second_var);
	
	first_var = first_var + second_var;
	second_var = first_var - second_var;
	first_var = first_var - second_var;
	
	printf("Swapped integers:%d %d", first_var, second_var);
}
