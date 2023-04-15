#include<stdio.h>

int main() {
    int mark;
    printf("enter marks : ");
    scanf("%d",&mark);

    mark > 30 && mark <=100 ? printf("PASS") : printf("FAIL");

    // if (mark > 30 && mark <=100){
    //     printf("PASS");
    // }

    // else if (mark <30) {
    //     printf("FAIL");/
    // }    

    // else{
    //     printf("invalid input");
    // }

    return 0;
}