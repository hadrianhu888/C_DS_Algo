/*
C algorithms and data structures review - Arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    //array declaration
    int rollNo[10];
    
    //taking inputs 
    for(int i = 0; i < 10; i++)
    {
        printf("Enter roll number: ");
        scanf_s("%d", &rollNo[i]);
    }

    //printing the array
    for (int i = 0; i < 10; i++) {
        printf("Roll number: %d\n\n", rollNo[i]);
    }

    int marks[20]; 
    int i = 0;
    int n = 0;
    int sum = 0;
    float avg = 0.0;
    printf("Enter the number of students: ");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf_s("%d", &marks[i]);
        sum += marks[i];
    }
    avg = (float)sum / n;
    printf("Average marks: %.2f", avg);
    return 0;
}

