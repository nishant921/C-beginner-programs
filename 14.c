// Write a program to implement program 5 using for and do-while loop.
// 5 . Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main() {

    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int i = 1;
    int sum = 0;

    if (n <= 0) {
        printf("Number should be greater than 0.");
        return 0;
    }
    do
    {
        sum +=i;
        i++;

    } while (i<=n);
    printf("Sum of %d Natural numbers: %d",n,sum);

    return 0;
}