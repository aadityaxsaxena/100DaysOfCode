/*
Return a structure containing top student's details from a function.
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
Explanation 1:
The function returns the structure containing the highest scoring student's details.
*/
#include <stdio.h>
#define MAX 50
#define MAX_STUD 100
struct Student {
    char name[MAX];
    int roll;
    int marks;
};
struct Student top(struct Student s[], int n) {
    struct Student t = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > t.marks)
            t = s[i];
    return t;
}
int main() {
    struct Student s[MAX_STUD];
    int n;
    printf("Number of students: ");
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(s[i].name, MAX, stdin);
        size_t len = 0;
        while (s[i].name[len] != '\0') {
            if (s[i].name[len] == '\n') {
                s[i].name[len] = '\0';
                break;
            }
            len++;
        }
        printf("Enter roll number and marks: ");
        scanf("%d %d", &s[i].roll, &s[i].marks);
        getchar();
    }
    struct Student t = top(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", t.name, t.roll, t.marks);
    return 0;
}
