//  Write a C program to calculate the area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user

#include<stdio.h>

int main(){
    // float length = 2;
    // float breadth = 2;
    float length ;
    float breadth ;

    printf("Length: ");
    scanf("%f",&length);
    printf("Breadth: ");
    scanf("%f",&breadth);
    printf("Area of the Rectangle with length:%.3f and breadth : %.3f : %.3f",length,breadth,length*breadth);
    return 0;
}