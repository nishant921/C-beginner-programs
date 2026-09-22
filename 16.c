// Write a program to calculate the factorial of a given number using a for loop.
#include <stdio.h>

int main() {

    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    int fact = 1;

    if (n<0){
        printf("Negative Number doesn't have Factorial");
        return 0;
    }
    for (int i=1 ; i <= n; i++) fact*=i;
    printf("Factorial of %d: %d",n,fact);
    return 0;
}