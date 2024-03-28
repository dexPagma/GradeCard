#include<stdio.h>
#include<math.h>
#include<time.h>
#include"mk.h"

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        char name[50];
        float ISA1[5], ISA2[5];

        printf("\nStudent %d:\n\n", i + 1);
        inputStudentData(name, ISA1, ISA2);

        float avg1 = calAvg(ISA1, 5);
        float avg2 = calAvg(ISA2, 5);

	char grade1 = gradeAssignment(avg1);
	char grade2 = gradeAssignment(avg2);

        genGradeCard(name,grade1,grade2);
    }

    return 0;
}
