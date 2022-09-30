#include <stdio.h>
#include <math.h>
#define PI 3.14


typedef struct point{
    double axis;
    double ordinate;
}point;

typedef struct circle{
    point center;
    double radius;
}circle;

double distance(point x,point y);
double areaOfCircle(circle cir);
void inside(point po,circle cir);

int main()
{
int choice;
    printf("Type a relevant number.\n(1=distance between two points, 2=area of a circle, 3=inside,outside,on)\n");
    scanf("%i",&choice);
    if (choice == 1)
    {
        point a,b;
        printf("Enter the first point\n");
        scanf("%lf %lf",&a.axis,&a.ordinate);
        printf("Enter the second point and let me calculate the distance between them\n");
        scanf("%lf %lf",&b.axis,&b.ordinate);
        printf("distance is %lf",distance(a,b));
    }
    if(choice==2)
    {
        circle a;
        printf("Enter the center of the circle\n");
        scanf("%lf %lf",&a.center.axis,&a.center.ordinate);
        printf("Enter the radius of the circle\n");
        scanf("%lf",&a.radius);
        printf("area is %lf",areaOfCircle(a));
    }
    if(choice==3)
    {
        point b;
        circle a;
        printf("Enter the point\n");
        scanf("%lf %lf",&b.axis,&b.ordinate);

        printf("Enter the center of the circle\n");
        scanf("%lf %lf",&a.center.axis,&a.center.ordinate);
        printf("Enter the radius of the circle\n");
        scanf("%lf",&a.radius);

        inside(b,a);
    }
}

double distance(point x,point y)
{
    double dist=sqrt(pow((y.ordinate-x.ordinate),2)+pow((y.axis-x.axis),2));
    return dist;
}

double areaOfCircle(circle cir)
{
    double area=PI*pow(cir.radius,2);
    return area;
}

void inside(point po,circle cir)
{
    if(pow((po.axis-cir.center.axis),2)+pow((po.ordinate-cir.center.ordinate),2)<pow(cir.radius,2))
    {
        printf("The point is inside of the circle");
    }
    else if(pow((po.axis-cir.center.axis),2)+pow((po.ordinate-cir.center.ordinate),2)==pow(cir.radius,2))
    {
        printf("The point is on the circle");
    }
    else
    {
        printf("The point is outside of the circle");
    }
}
