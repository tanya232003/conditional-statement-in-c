# include<stdio.h>

int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);

    if (marks>=90 && marks <=100){
        printf("A+");
    }
    else if (marks>=70 && marks <90){
        printf("A");
    }
    else if (marks>=30 && marks <70){
        printf("B");
    }
    else if (marks < 30){
         printf("C");
    }
    else {
        printf("invalid input");
    }


    // using ternary

    // if (marks >=0 && marks <=100){
    // marks>=90 && marks <=100 ? printf("A+") : printf("");
    // marks>=70 && marks <90 ? printf("A") : printf(""); 
    // marks>=30 && marks <70 ? printf("B") : printf("");
    // marks < 30 ? printf("C") : printf("");
    // }

    // else {
    //     printf("invalid input");
    // }


    return 0;
}