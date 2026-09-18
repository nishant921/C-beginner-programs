// Write a program to determine whether a character entered by the user is lowercase or not

// 97 to 122 are lower case ascii values

#include<stdio.h>

int main(){

    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    printf("ASCII Value: %d \n",character);

    if (character>=92 && character<=122){
        printf("Entered char is Lower case");
    }
    else  printf("Entered char is Upper case");


    return 0;

}