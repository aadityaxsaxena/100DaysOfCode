/*
Find and print the student with the highest marks.
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.
*/
#include <stdio.h>
#include <string.h>
#define MAX_NAME 50
#define MAX_STUDENTS 100
struct Student {
    char name[MAX_NAME];
    int roll;
    int marks;
};
void printTopper(struct Student s[], int count) {
    struct Student *topper = &s[0];
    for (int i = 1; i < count; i++) {
        if (s[i].marks > topper->marks) {
            topper = &s[i];
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper->name, topper->marks);
}
int main() {
    struct Student students[MAX_STUDENTS];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    printTopper(students, n);
    return 0;
}