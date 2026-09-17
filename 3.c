//  Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.

#include<stdio.h>

int main(){
    float celsius;
    printf("Celsius: ");
    scanf("%f",&celsius);
    float fahrenheit = (celsius*9/5)+32;
    printf("celsius to fahrenehit: %f",fahrenheit);
    return 0;
}