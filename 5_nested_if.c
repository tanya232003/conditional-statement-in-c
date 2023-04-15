#include<stdio.h>

int main() {
    int num ;
    printf("enter number : ");
    scanf("%d",&num);

//  nested if 

    if (num >= 0){
        printf("number is positive\n ");
        if(num % 2 == 0){
            printf("number is even \n ");
        }
        else{
            printf("number is negative\n");
        }
    }

    else{
        printf("number is negative\n ");
        if (num % 2 == 0){
            printf("number is negative and\n even number\n");
        }
        else {
            printf("number is negative and\n odd number\n");
        }
    }

    return 0;
}