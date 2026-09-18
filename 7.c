//  Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.


#include <stdio.h>

int main() {

    int income;
    printf("Enter Income in LPA: ");
    scanf("%d",&income);

    float tax=0;

    if (income<250000) tax = 0;

    else if (income>=250000 && income<500000){
        tax = (income-250000)*0.05;
    }
    else if(income>=500000 && income<1000000){
        tax = (income-250000)*0.20;
    }
    else{
        tax = income*0.30;
    }
     
    printf("Tax to Pay on your %d = %.2f",income,tax);

    return 0;
}