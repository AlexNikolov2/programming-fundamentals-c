#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    char class[3];
    int grade;
} Student;

void average_grade(Student *students, int size) {
    int class_grades[26] = {0}; 
    int class_counts[26] = {0};

    for (int i = 0; i < size; ++i) {
        int class_index = students[i].class[0] - 'A'; 
        class_grades[class_index] += students[i].grade;
        class_counts[class_index]++;
    }

    printf("\nAverage grades for each class:\n");
    for (int i = 0; i < 26; ++i) {
        if (class_counts[i] != 0) {
            double avg_grade = (double)class_grades[i] / class_counts[i];
            printf("Class %c: %.2lf\n", i + 'A', avg_grade); 
        }
    }
}

int main() {
    int students_size;
    printf("Student size: \n");
    scanf("%d", &students_size);

    Student *students_array = (Student *)malloc(students_size * sizeof(Student));

    if (students_array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < students_size; i++) {
        printf("Student name: \n");
        scanf("%s", students_array[i].name);
        printf("Student class: \n");
        scanf("%s", students_array[i].class);
        printf("Student grade: \n");
        scanf("%d", &students_array[i].grade);
    }

    average_grade(students_array, students_size);
    free(students_array);

    return 0;
}