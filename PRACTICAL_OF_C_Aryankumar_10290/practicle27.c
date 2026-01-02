#include <stdio.h>
int square(int n){
    return n*n;
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Square = %d", square(n));
    return 0;
}