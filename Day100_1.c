/*
Use pointer to struct to modify and display data using -> operator.
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student s, *p;
    p = &s;
    printf("Enter Name: ");
    scanf("%s", p->name);
    printf("Enter Roll: ");
    scanf("%d", &p->roll);
    printf("Enter Marks: ");
    scanf("%d", &p->marks);
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n", p->name, p->roll, p->marks);
    return 0;
}