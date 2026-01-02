#include <stdio.h>
int main() {
    int choice,n,i=1;
    printf("Press 1 to print table, 0 to exit: ");
    scanf("%d",&choice);

    if(choice==1){
        printf("Enter number: ");
        scanf("%d",&n);
        do{
            printf("%d x %d = %d\n",n,i,n*i);
            i++;
        }while(i<=10);
    }
    return 0;
}