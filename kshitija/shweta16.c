//program for calculating the area of cube
#include<stdio.h>
void main()
{
float a;
float surface_area,volume;
printf("Enter size of any side of a cube:");
scanf("%f",&a);
surface_area=6*(a*a);
volume=a*a*a;
printf("Surface area of cube is:%.3f",surface_area);
printf("\nVolume of cube:%.3f",volume);
}
/***********OUT***********
Enter size of any side of a cube:5
Surface area of cube is:150.000
Volume of cube:125.000dell@dell-OptiPlex-7040:~$ */

