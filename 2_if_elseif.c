#include<stdio.h>

int main() {
    int age;
    printf("enter your age : ");
    scanf("%d",&age);

    if (age >=18){
        printf("aduld\n");
    }

    else if (age<18 && age>=13){
        printf("teenager\n");
    }

    else if (age<13 && age>=5){
        printf("child\n");
    }

    else{
        printf("toodler\n");
    }

    return 0;

}