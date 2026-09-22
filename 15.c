/* Write a program to calculate the sum of the numbers occurring in the multiplication
 table of 8 or any number (consider 8 × 1 to 8 × 10) */

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    
    int sum = 0;
    for (int i=1; i<=10 ; i++){
        sum +=(n*i);
    }
    printf("%d",sum);


    return 0;
}