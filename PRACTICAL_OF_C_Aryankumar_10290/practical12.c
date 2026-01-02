#include <stdio.h>
int main(){
    int year;
    printf("Enter year", year);
    scanf("%d", &year);
    if (year % 4 == 0 || year % 400) {
       printf("%d is an leap year \n", year); 
    }
    else if(year % 100 !=0){
        printf("%d is not an leap year \n", year);
    }
    return 0;
}   