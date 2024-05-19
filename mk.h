#ifndef MK_H
#define MK_H

#include <stdio.h>
#include <math.h>

typedef struct {
    char name[50];
    float ISA1[5];
    float ISA2[5];
    float Assignment[5];
    float ESA[5];
    float avg1[5];
    char grade1[5];
} Student;


// Function declarations
void inputStudentData(Student *student);
float calAvg(float marks[], int size);
char gradeAssignment(float avg);
void calculateAverageAndGrade(Student *student);
void genGradeCardToFile(Student *student, FILE *file);
Student* findStudentByName(Student *students, int num_students, const char *name);

#endif // MK_H
