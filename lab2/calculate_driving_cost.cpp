#include <stdio.h>

int main()
{
	float driven_miles, cost_gallon, miles_gallon, parking_fees, tolls, total_cost;
	
	printf("Total miles driven per day: \n");
	scanf("%f", &driven_miles);
	printf("Cost of a gallon of gasoline: \n");
	scanf("%f", &cost_gallon);
	printf("Average miles per gallon: \n");
	scanf("%f", &miles_gallon);
	printf("Parking fees per day: \n");
	scanf("%f", &parking_fees);
	printf("Tolls per day: \n");
	scanf("%f", &tolls);
	
	total_cost = driven_miles/miles_gallon*cost_gallon+parking_fees+tolls;
	printf("%f", total_cost);
}
