// Calculate the area of a circle and modify the same program to calculate the volume of
// a cylinder given its radius and height.

#include<stdio.h>

int main(){
    float pi = 3.14;
    float r;
    float h;

    printf("Radius: ");
    scanf("%f",&r);
    float circle = pi*r*r;
    printf("Area of Circle: %f",circle);

    printf("\n");
    printf("height: ");
    scanf("%f",&h);

    float cylinder = pi*r*r*h;
    printf("Volume of Cylinder: %f",cylinder);
    return 0;
}
