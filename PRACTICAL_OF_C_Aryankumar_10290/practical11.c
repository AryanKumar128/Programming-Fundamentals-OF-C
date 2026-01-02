// Write a C program that takes three numbers as input and 
// determines the largest number among them using nested if-else statements. 





#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three number");
    scanf("%d %d %d", &num1,&num2,&num3);

    if (num1 > num2){
        if(num1 > num3){
            printf("%d is a larger number", num1);
        }
        else{
            printf("%d is a larger number", num3);
        }
    }
    else{
        if(num2 > num3){
            printf("%d is larger number", num2);
        }
        else{
            printf("%d is larger number", num3);
        }
    }

    return 0;
}