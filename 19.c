// What will the following line produce in a C program?
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>

int main()
{

    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // 6 6 4 evaluation order is right to left(a++ = print 4 ,increment now a=5
                        // ++a=6, print=6
                        // a=6)
    return 0;
}