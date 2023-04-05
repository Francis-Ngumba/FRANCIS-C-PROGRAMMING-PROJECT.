#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50], address[100], grade[10], gender;
    int age;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int totalStudents = 0, option;

    do {
        printf("\nStudent Enrollment System");
        printf("\n1. Enroll a new student");
        printf("\n2. Display all enrolled students");
        printf("\n3. Exit");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (totalStudents < MAX_STUDENTS) {
                    printf("\nEnter the name of the student: ");
                    scanf("%s", students[totalStudents].name);
                    printf("Enter the age of the student: ");
                    scanf("%d", &students[totalStudents].age);
                    printf("Enter the gender of the student (M/F): ");
                    scanf(" %c", &students[totalStudents].gender);
                    printf("Enter the address of the student: ");
                    scanf("%s", students[totalStudents].address);
                    printf("Enter the grade of the student: ");
                    scanf("%s", students[totalStudents].grade);
                    totalStudents++;
                } else {
                    printf("\nMaximum number of students reached!");
                }
                break;
            case 2:
                if (totalStudents == 0) {
                    printf("\nNo students enrolled yet!");
                } else {
                    printf("\n%-20s%-10s%-10s%-30s%-10s", "Name", "Age", "Gender", "Address", "Grade");
                    for (int i = 0; i < totalStudents; i++) {
                        printf("\n%-20s%-10d%-10c%-30s%-10s", students[i].name, students[i].age, students[i].gender, students[i].address, students[i].grade);
                    }
                }
                break;
            case 3:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid option!");
        }
    } while (option != 3);

    return 0;
}
