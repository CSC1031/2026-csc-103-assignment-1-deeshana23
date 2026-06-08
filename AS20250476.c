#include <stdio.h>
#include <stdlib.h>

int main() {
    int math, science, english;
    int total, highest;
    float average;
    char grade;

    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter English marks: ");
    scanf("%d", &english);

    total = math + science + english;
    average = total / 3.0;

    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';


    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);


    if (math >= 40 && science >= 40 && english >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    highest = math;
    if (science > highest)
        highest = science;
    if (english > highest)
        highest = english;

    printf("Highest Mark: %d\n", highest);


    if (average >= 85 && math >= 80 && science >= 80 && english >= 80)
        printf("Distinction: YES\n");
    else
        printf("Distinction: NO\n");

    return 0;
}






