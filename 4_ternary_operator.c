# include<stdio.h>

int main (){
    int age;
    printf("enter age : ");
    scanf("%d",&age);

//  ternary operator 

    age >= 18 ? printf("adult \n") : printf("") ;
    age < 18 && age >= 13 ? printf("not adult \n"): printf("") ;
    age < 13 && age >= 5 ? printf("teenager \n ") : printf("") ;
    age < 5 ? printf("toddler \n") : printf("") ;

    return 0;
}