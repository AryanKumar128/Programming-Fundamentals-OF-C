#include <stdio.h>
char grade(float avg){
    if(avg>=90) return 'A';
    else if(avg>=80) return 'B';
    else if(avg>=70) return 'C';
    else if(avg>=60) return 'D';
    else return 'F';
}
int main() {
    float m1,m2,m3,avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f%f%f",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3;
    printf("Average = %.2f\nGrade = %c", avg, grade(avg));
    return 0;
}