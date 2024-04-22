#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"mk.h"

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Allocate memory for the array of students
    Student *students = malloc(num_students * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudentData(&students[i]);
        calculateAverageAndGrade(&students[i]);
        genGradeCard(&students[i]);
    }

    // TODO: Implement additional functionality as needed

    // Free allocated memory
    free(students);

    return 0;
}
