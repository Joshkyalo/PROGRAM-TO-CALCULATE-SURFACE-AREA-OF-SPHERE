#include <stdio.h>
#include <stdlib.h>

/* PROGRAM TO CALCULATE SURFACE AREA OF SPHERE created by joshua*/

int main()
 { 

float radius;
float surface_area;
printf("Enter radius of the sphere:\n");
scanf("%f",&radius);
surface_area=4*(22/7)*radius*radius;
printf("surface area of sphere is :%.3f",surface_area);
return 0;
}


2
we can also find  using this method  when given radius of sphere
#include<stdio.h>


int main()
{
int radius=37;
double pie=3.14;
double area_sphere=4*pie*(radius*radius);
printf("surface area of the sphere=%f" ,area_sphere);

	
	
	
	return 0;
	}
