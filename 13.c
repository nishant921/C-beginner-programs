// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main() {

    int n;
    int sum = 0;
    printf("Enter N: ");
    scanf("%d",&n);
    
    int i = 1;
    while (i<=n){
        sum+=i;
        i++;
    } 
    printf("Sum of %d Natural numbers: %d",n,sum);

    return 0;
}