// 10. Write a program to check whether a given number is prime or not using loops.
// 11. Implement 10 using  other types of loops.

#include <stdio.h>
int main()
{

    int num;
    int isPrime = 1;
    printf("Enter a Numbers: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("Number should be greater than or Equal to 2");
        return 0;
    }

    // Using for Loop
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0){
            isPrime = 0;
            break;
        }
    }

    // Using While Loop
    int i = 2;
    while (i <= (num / 2))
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    // using do while loop
    // int i = 2;
    do
    {
        if (i > (num / 2))
            break;

        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }

        i++;
    } while (i <= (num / 2));

    if (isPrime)
        printf("prime Number");
    else
        printf("Not a prime Number");

    return 0;
}