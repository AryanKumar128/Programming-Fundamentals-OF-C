#include <stdio.h>
int main() {
    int choice,n,i;
    printf("Press 1 to print table, 0 to exit: ");
    scanf("%d",&choice);

    while(choice==1){
        printf("Enter number: ");
        scanf("%d",&n);
        i=1;
        while(i<=10){
            printf("%d x %d = %d\n",n,i,n*i);

            i++;
        }
        break;
    }
    return 0;
}