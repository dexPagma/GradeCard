#ifndef MK_H
#define MK_H

void inputStudentData(char name[], float exam1_marks[], float exam2_marks[]);
float calAvg(float marks[], int size);
char gradeAssignment(float avg);
void genGradeCard(char name[], char grade1, char grade2);

#endif