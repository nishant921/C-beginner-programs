// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1 ;
    printf("Enter Number: ");
    scanf("%d",&n);

    if (n < 2)
    {
        printf("Number should be greater than or equal to 2");
        return 0;
    }
    // for (int i = 2; i <= (n / 2); i++)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) isPrime = 0;
    }
    
    if (isPrime) printf("prime Number");
    else printf("Not a prime Number");
    return 0;
}