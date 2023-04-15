#include<stdio.h>

int main() {
    char day;    //1-monday, 2-tuesday, 3-wednesday......so on
    // printf("enter day(1-7) : ");
    printf("enter day : ");       //m-monday, t-tuesday, w-wednesday......so on
    scanf("%c",&day);

    // switch statement

    switch (day){

        case 'm' : printf("monday");
                 break;
        
        case 't' : printf("tuesday");
                 break;

        case 'w' : printf("wednesday");
                 break;

        case 'T' : printf("thursday");
                 break;

        case 'f' : printf("friday");
                 break;

        case 's' : printf("saturday");
                 break;

        case 'S' : printf("sunday");
                 break;

        default : printf("invalid input");
    }

    return 0;

}