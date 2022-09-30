#include <stdio.h>
#include <math.h>

/* sorudaki deðerler */
#define pi 3.14
#define radius_cylinder 2
#define height_cylinder 10
#define radius_ball 1.5
#define number_ball 3
#define volume_water 100

int main()
{
	/* silindir ve kürelerin hacimlerinin formülü*/
	float volume_cylinder = pi * pow(radius_cylinder, 2) * height_cylinder;
	float volume_ball = 4/3.0 * pi * pow(radius_ball, 3);
	
	/* taþan suyun hacim formülü ve kullanýcýya sunulmasý */
	float tasmis_su = number_ball * volume_ball + volume_water - volume_cylinder;
	
	printf("%f", tasmis_su);
}
