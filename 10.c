//  Write a program to find greatest of four numbers entered by the user
#include <stdio.h>

int main() {

    int first, second, third, fourth;
    int greatest;

    printf("Enter First no. : ");
    scanf("%d", &first);

    printf("Enter Second no. : ");
    scanf("%d", &second);

    printf("Enter Third no. : ");
    scanf("%d", &third);

    printf("Enter Fourth no. : ");
    scanf("%d", &fourth);


    // assuming the first is greater 
    greatest = first;

    if (second > greatest)
        greatest = second;

    if (third > greatest)
        greatest = third;

    if (fourth > greatest)
        greatest = fourth;

    printf("%d is the greatest number", greatest);

    return 0;
}