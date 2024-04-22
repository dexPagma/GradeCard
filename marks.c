#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "mk.h"

const char *subject_names[] = {"Physics", "PSWC", "Mathematics", "Electrical", "Mechanical"};
const int isa_marks = 40;
const int assignment_marks = 10;
const int esa_marks = 100;

void inputStudentData(Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);
    
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for %s ISA1 (Max 40): ", subject_names[i]); 
        scanf("%f", &student->ISA1[i]);
        
        if (student->ISA1[i] > 40 || student->ISA1[i] < 0) {
            printf("Invalid marks entered for %s ISA1. Exiting program.\n", subject_names[i]);
            exit(1);
        }
        
        printf("Enter marks for %s ISA2 (Max 40): ", subject_names[i]); 
        scanf("%f", &student->ISA2[i]);
        
        if (student->ISA2[i] > 40 || student->ISA2[i] < 0) {
            printf("Invalid marks entered for %s ISA2. Exiting program.\n", subject_names[i]);
            exit(1);
        }
        
        printf("Enter marks for %s Assignment (Max 10): ", subject_names[i]); 
        scanf("%f", &student->Assignment[i]);
        
        if (student->Assignment[i] > 10 || student->Assignment[i] < 0) {
            printf("Invalid marks entered for %s Assignment. Exiting program.\n", subject_names[i]);
            exit(1);
        }
        
        printf("Enter marks for %s ESA (Max 100): ", subject_names[i]); 
        scanf("%f", &student->ESA[i]);
        
        if (student->ESA[i] > 100 || student->ESA[i] < 0) {
            printf("Invalid marks entered for %s ESA. Exiting program.\n", subject_names[i]);
            exit(1);
        }
    }
}



char gradeAssignment(float avg) {
    char grade;

    if (avg >= 90) {
        grade = 'S';
    } else if (avg >= 80) {
        grade = 'A';
    } else if (avg >= 70) {
        grade = 'B';
    } else if (avg >= 60) {
        grade = 'C';
    } else if (avg >= 50) {
        grade = 'D';
    } else if (avg >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    return grade;
}

void calculateAverageAndGrade(Student *student) {
    for (int i = 0; i < 5; i++) {
        float total_marks = (student->ISA1[i] + student->ISA2[i]) / 2 + student->Assignment[i] + student->ESA[i] / 2;
        student->avg1[i] = total_marks;
        student->grade1[i] = gradeAssignment(student->avg1[i]);
    }
}

void genGradeCard(Student *student) {
    printf("\n===== GradeCard for %s =====\n", student->name);
    for (int i = 0; i < 5; i++) {
        printf("%s Grade: %c\n", subject_names[i], student->grade1[i]);
    }
}
