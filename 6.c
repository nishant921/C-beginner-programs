// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from the 

#include <stdio.h>

int main() {

    int maths;
    int science;
    int sst;
    printf("Enter Marks in Maths: ");
    scanf("%d",&maths);
    printf("Enter Marks in Science: ");
    scanf("%d",&science);
    printf("Enter Marks in SST: ");
    scanf("%d",&sst);

    int percent = (maths+science+sst)/3;

    if (percent >= 40 && maths>=33 && science>=33 && sst>=33)
        printf("Passed");

    else printf("fail");

    return 0;
}