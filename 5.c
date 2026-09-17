// check whether a given num is divisble by 97 or not

#include <stdio.h>

int main(){

    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    if (num%97==0){
        printf("Divisible by 97");
    }
    else{
        printf("Not Divisble");
    }
    return 0;
}
