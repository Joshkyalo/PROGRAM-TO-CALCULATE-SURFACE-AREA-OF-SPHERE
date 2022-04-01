#include <stdio.h>
#include <stdlib.h>

/* PROGRAM TO CALCULATE SURFACE AREA OF SPHERE created by joshua*/

int main(int argc, char *argv[])
 { 

float radius;
float surface_area;
printf("Enter radius of the sphere:\n");
scanf("%f",&radius);
surface_area=4*(22/7)*radius*radius;
printf("surface area of sphere is :%.3f",surface_area);
return 0;
}

