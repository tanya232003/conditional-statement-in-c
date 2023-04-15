#include<stdio.h>
   
    // multiple if always executed irrespective of th eabove statement
int main() {
    int age;
    printf("enter your age : ");
    scanf("%d",&age);

    if (age >=18){
        printf("aduld\n");
    }

    if (age>=18){
        printf("teenager\n");
    }

    if (age>=5){
        printf("child\n");
    }

    else{
        printf("toodler\n");
    }

    printf("always executed");
    return 0;

}