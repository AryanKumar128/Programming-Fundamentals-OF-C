#include <stdio.h>
#include <string.h>

char getGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int students, subjects;
    int i, j;

    char studentName[50];
    char subjectName[20][50];

    float marks;
    float subjectSum, studentAvg;
    float classTotal = 0;

    float highestAvg, lowestAvg;
    char highestName[50], lowestName[50];

    /* Overall topper */
    float overallTopTotal = 0;
    float overallTopAvg = 0;
    char overallTopName[50];

    int passCount = 0, failCount = 0;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    /* Subject-wise topper */
    float subjectTopMarks[20];
    char subjectTopper[20][50];

    /* Subject-wise fail record */
    char failStudent[100][50];   // store student name
    char failSubject[100][50];   // store subject name
    int failIndex = 0;

    /* -------- Input -------- */
    printf("Enter number of students in class: ");
    scanf("%d", &students);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    printf("\nEnter Subject Names:\n");
    for (i = 0; i < subjects; i++) {
        printf("Subject %d name: ", i + 1);
        scanf("%s", subjectName[i]);
        subjectTopMarks[i] = -1;
    }

    /* -------- Students Loop -------- */
    for (i = 1; i <= students; i++) {
        printf("\nEnter Student %d Name: ", i);
        scanf("%s", studentName);

        subjectSum = 0;

        for (j = 0; j < subjects; j++) {
            printf("Enter marks of %s in %s: ", studentName, subjectName[j]);
            scanf("%f", &marks);

            subjectSum += marks;

            /* Subject-wise topper */
            if (marks > subjectTopMarks[j]) {
                subjectTopMarks[j] = marks;
                strcpy(subjectTopper[j], studentName);
            }

            /* Subject-wise fail check */
            if (marks < 40) {
                strcpy(failStudent[failIndex], studentName);
                strcpy(failSubject[failIndex], subjectName[j]);
                failIndex++;
            }
        }

        studentAvg = subjectSum / subjects;
        printf("Average of %s: %.2f\n", studentName, studentAvg);

        classTotal += studentAvg;

        /* Pass / Fail */
        if (studentAvg >= 40)
            passCount++;
        else
            failCount++;

        /* Overall Topper */
        if (i == 1 || subjectSum > overallTopTotal) {
            overallTopTotal = subjectSum;
            overallTopAvg = studentAvg;
            strcpy(overallTopName, studentName);
        }

        /* Highest & Lowest Average */
        if (i == 1) {
            highestAvg = lowestAvg = studentAvg;
            strcpy(highestName, studentName);
            strcpy(lowestName, studentName);
        } else {
            if (studentAvg > highestAvg) {
                highestAvg = studentAvg;
                strcpy(highestName, studentName);
            }
            if (studentAvg < lowestAvg) {
                lowestAvg = studentAvg;
                strcpy(lowestName, studentName);
            }
        }

        /* Grade Count */
        char grade = getGrade(studentAvg);
        if (grade == 'A') countA++;
        else if (grade == 'B') countB++;
        else if (grade == 'C') countC++;
        else if (grade == 'D') countD++;
        else countF++;
    }

    /* -------- Output -------- */
    printf("\n----- Class Report -----\n");
    printf("Class Average: %.2f\n", classTotal / students);

    printf("\nOverall Topper:\n");
    printf("Name          : %s\n", overallTopName);
    printf("Total Marks   : %.2f\n", overallTopTotal);
    printf("Average Marks : %.2f\n", overallTopAvg);

    printf("\nHighest Average: %.2f (%s)\n", highestAvg, highestName);
    printf("Lowest Average : %.2f (%s)\n", lowestAvg, lowestName);

    printf("\nPass Students: %d\n", passCount);
    printf("Fail Students: %d\n", failCount);

    printf("\nSubject-wise Topper:\n");
    for (i = 0; i < subjects; i++) {
        printf("%s -> %s (%.2f)\n",
               subjectName[i],
               subjectTopper[i],
               subjectTopMarks[i]);
    }

    /* Subject-wise Fail Report */
    printf("\nSubject-wise Fail Report:\n");
    if (failIndex == 0)
        printf("No student failed in any subject.\n");
    else {
        for (i = 0; i < failIndex; i++) {
            printf("Student: %s failed in %s\n", failStudent[i], failSubject[i]);
        }
    }

    printf("\nGrade Distribution:\n");
    printf("A: %d\n", countA);
    printf("B: %d\n", countB);
    printf("C: %d\n", countC);
    printf("D: %d\n", countD);
    printf("F: %d\n", countF);

    return 0;
}