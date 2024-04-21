#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter data for %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter ID for student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter grade for student %d: ", i+1);
        scanf("%f", &students[i].grade);
    }
    
    float totalGrade = 0;
    for (int i = 0; i < numStudents; i++) {
        totalGrade += students[i].grade;
    }
    float averageGrade = totalGrade / numStudents;
    
    printf("Average grade of the students: %.2f\n", averageGrade);

    free(students);
}