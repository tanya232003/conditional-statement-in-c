#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int num, digit,sum , num1, num2, remain;
    scanf("%d",&num);

    digit = 0, sum = 0;
    num1 = num2 = num;
    

    while(num1>0){
        digit += 1;
        num1 /= 10;
        
    }

    
    while(num2>0){
        remain = num2 % 10;
        num2 /= 10;
        sum += pow(remain, digit);

    }

    sum==num ? printf("Armstrong") : printf("Not Armstrong") ;

	return 0;
}

